#include "../../../include/Game/Core/Game.h"
#include "../../../include/Game/States/ExitState.h"
#include "../../../include/Game/States/MainMenuState.h"
#include "../../../include/Game/States/CharacterCreationState.h"
#include <iostream>
#include <memory>
#include <numeric>
#include <string>
#include <variant>

// Constructor: Initialize the game with the initial state
Game::Game() : characterManager(std::make_shared<CharacterManager>()){

	// start with MainMenuState
	stateManager.changeState(std::make_unique<MainMenuState>(characterManager));
}

// Main game loop
void Game::run() {
	bool running = true;

	while (running) {
		auto *currentState = stateManager.getCurrentState();
		if (currentState) {
			std::cout << "[Game Loop] Rendering current state: " << typeid(*currentState).name() << "\n";
			stateManager.render();

			// stop immediatly if the current state signals Exit
			if (currentState->isExit()) {
				std::cout << "[Game Loop] Exit state detected. Stopping game loop.\n";
				running = false;
				break;
			}

			std::cout << "[Game Loop] Getting input...\n";
			if (std::cin.eof()) {
				std::cerr << "[Game Loop] Input stream exhausted. Transitioning to exit state.\n";
				stateManager.changeState(std::make_unique<ExitState>());
				continue;
			}

			State::InputType input = getInputFromPlayer();

			if (std::holds_alternative<std::string>(input) && std::get<std::string>(input).empty()) {
				std::cerr << "[Game Loop] No input provided. Please try again!\n";
				continue;
			}

			stateManager.handleInput(input);

			std::cout << "[Game Loop] Updating current state...\n";
			stateManager.update();
			
			auto nextState = currentState->getNextState();
			if (nextState) {
				std::cout << "[Game Loop] Transitioning to next state...\n";
				stateManager.changeState(std::move(nextState));
			}
		} else {
			std::cerr << "[Game Loop] No current state. Stopping game loop.\n";
			running = false;
		}
	}
}

// Utility method to get normalized input from the player
State::InputType Game::getInputFromPlayer() {
	std::string inputString;
	std::getline(std::cin, inputString);

	if (std::cin.eof()) {
		return "";
	}

	// Trim leading/trailing spaces
	inputString.erase(0, inputString.find_first_not_of(' '));
	inputString.erase(inputString.find_last_not_of(' ') + 1);

	// Flush if input is empty
	if (inputString.empty()) {
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return ""; // return empty string to signal retry
	}

	// check if the input is numeric
	if (!inputString.empty() && std::all_of(inputString.begin(), inputString.end(), ::isdigit)) {
		int parsedInput = std::stoi(inputString); // convert to int if numeric
		std::cout << "[Game] Input parsed as int: " << parsedInput << "\n";
		return parsedInput;
	}
	
	// check if input is a single character
	if (inputString.length() == 1) {
		char parsedInput = inputString[0]; // convert to char if input is one character
		std::cout << "[Game] Input parsed as char: " << parsedInput << "\n";
		return parsedInput;
	}
	
	// Default: Return as a string
	std::cout << "[Game] Input parsed as string: " << inputString << "\n";
	return inputString;
}
