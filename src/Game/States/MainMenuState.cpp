#include "../../../include/Game/States/MainMenuState.h"
#include "../../../include/Game/States/ExitState.h"
#include "../../../include/Game/States/CharacterCreationState.h"
#include "../../../include/Game/States/CharacterLoadingState.h"
#include <ios>
#include <iostream>
#include <limits>
#include <variant>

MainMenuState::MainMenuState(std::shared_ptr<CharacterManager> manager)
	: characterManager(manager) {}

void MainMenuState::render() {
	std::cout << "\n=== Main Menu ===\n";
	std::cout << "1. Create Character\n";
	std::cout << "2. Load Character\n";
	std::cout << "3. Exit Game\n";
}

void MainMenuState::handleInput(InputType input) {
	if (std::holds_alternative<std::string>(input) && std::get<std::string>(input).empty()) {
		std::cerr << "[MainMenuState] Empty input detected. Prompting again.\n";
		return;
	}


	if (std::holds_alternative<int>(input)) {
		int choice = std::get<int>(input);

		switch (choice) {
			case 1:
				std::cout << "Creating character...\n";
				nextState = std::make_unique<CharacterCreationState>(characterManager);
				break;
			case 2:
				std::cout <<"[MainMenuState] Transitioning to Character Loading State...\n";
				nextState = std::make_unique<CharacterLoadingState>(characterManager);
				break;
			case 3:
				std::cout << "Exit state detected.\n";
				nextState = std::make_unique<ExitState>();
				break;
			default:
				std::cout << "[MainMenuState] Invalid input. Please enter a number.\n";
				break;
		}
	} else {
		std::cout << "[MainMenuState] Please enter a valid number.\n";
	}
}

void MainMenuState::update() {
	// does not do anythiing yet
	// mock placement
	std::cout << "Updating...\n";
}

bool MainMenuState::isExit() const {
	return false;
}

std::unique_ptr<State> MainMenuState::getNextState() {
	std::cout << "[MainMenuState] Returning next state...\n";
	return std::move(nextState);
}
