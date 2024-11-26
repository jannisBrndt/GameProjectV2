#include "../../../include/Game/States/InGameState.h"
#include "../../../include/Game/States/MainMenuState.h"
#include "../../../include/Game/States/CharacterMenuState.h"
#include <iostream>

InGameState::InGameState(std::shared_ptr<CharacterManager> manager, std::shared_ptr<Character> loadedCharacter)
	: characterManager(manager), currentCharacter(loadedCharacter) {
}

void InGameState::render() {
	std::cout << "\n=== In-Game Menu ===\n";
	std::cout << "1. View Character\n";
	std::cout << "2. Start Dungeon\n";
	std::cout << "3. Exit to Main Menu\n";
}

void InGameState::handleInput(InputType input) {
	int choice = std::get<int>(input);
	switch (choice) {
		case 1:
			nextState = std::make_unique<CharacterMenuState>(characterManager, currentCharacter);
			break;
		case 2:
			std::cout << "Placeholder for DungeonMenu.\n";
			break;
		case 3:
			nextState = std::make_unique<MainMenuState>(characterManager);
			break;
		default:
			std::cerr << "Invalid option selected. Please try again.\n";
			break;
	}
}

void InGameState::update() {
	std::cout << "[InGameState] updating...\n";
}

bool InGameState::isExit() const {
	return false;
}

std::unique_ptr<State> InGameState::getNextState() {
	return std::move(nextState);
}
