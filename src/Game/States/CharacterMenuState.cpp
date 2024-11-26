#include "../../../include/Game/States/CharacterMenuState.h"
#include "../../../include/Game/States/InGameState.h"
#include <iostream>

CharacterMenuState::CharacterMenuState(std::shared_ptr<CharacterManager> manager, std::shared_ptr<Character> character)
	: characterManager(manager), currentCharacter(character) {
}

void CharacterMenuState::render() {
	std::cout << "\n=== Character Menu ===\n";
	std::cout << "1. View Stats\n";
	std::cout << "2. View Inventory\n";
	std::cout << "3. View Equipment\n";
	std::cout << "4. Go back\n";
}

void CharacterMenuState::handleInput(InputType input) {
	if (std::holds_alternative<int>(input)) {
		int choice = std::get<int>(input);
		switch (choice) {
			case 1:
				viewStats();
				break;
			case 2:
				std::cout << "[CharacterMenu] Placeholder for viewing Inventory...\n";
				break;
			case 3:
				std::cout << "[CharacterMenu] Placeholdere for viewing Equipment...\n";
				break;
			case 4:
				std::cout << "[CharacterMenu] Going back to In-Game Menu.\n";
				nextState = std::make_unique<InGameState>(characterManager, currentCharacter);
				break;
			default:
				std::cout << "[CharacterMenu] Invalid choice. Please retry.\n";
				break;
		}
	} else {
		std::cout << "[CharacterMenu] Please enter a valid number.\n";
	}
}
 void CharacterMenuState::update() {
	 // nothing yet
 }

bool CharacterMenuState::isExit() const {
	return false;
}

std::unique_ptr<State> CharacterMenuState::getNextState() {
	return std::move(nextState);
}

void CharacterMenuState::viewStats() {
	if (!currentCharacter) {
		std::cerr << "[CharacterMenuState] Error: No character is currently loaded!\n";
		return;
	}
	auto stats = characterManager->getCharacterStats(currentCharacter->getName());

	if (stats.empty()) {
		std::cerr << "[CharacterMenuState] Error: Unable to load stats for character: " << currentCharacter->getName() << ".\n";
		return;
	}
	std::cout << "\n=== Character Stats ===\n";
	for (const auto& pair : stats) {
		if (std::holds_alternative<std::string>(pair.second)) {
			std::cout << pair.first << ": " << std::get<std::string>(pair.second) << "\n";
		} else if (std::holds_alternative<int>(pair.second)) {
			std::cout << pair.first << ": " << std::get<int>(pair.second) << "\n";
		}	
	}
}
