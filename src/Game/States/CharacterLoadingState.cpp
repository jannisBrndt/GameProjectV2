#include "../../../include/Game/States/CharacterLoadingState.h"
#include "../../../include/Game/States/InGameState.h"
#include <iostream>
#include <iterator>
#include <memory>

CharacterLoadingState::CharacterLoadingState(std::shared_ptr<CharacterManager> manager)
	: characterManager(manager) {
		loadCharacters();
}

void CharacterLoadingState::loadCharacters() {
	characterFiles = characterManager->listAvailableCharacters();
}

void CharacterLoadingState::handleInput(InputType input) {
	if (std::holds_alternative<int>(input)) {
		int index = std::get<int>(input) - 1;
		if (index >= 0 && index < characterFiles.size()) {
			selectedOption = index;
		} else {
			std::cerr << "Invalid selection. Please select a number listed.\n";
			selectedOption = -1;
		}
	}
}

void CharacterLoadingState::update() {
	if (selectedOption != -1) {
		try {
			auto character = characterManager->loadCharacterFromFile(characterFiles[selectedOption]);
			std::cout << "Character loaded successfully.\n";
			nextState = std::make_unique<InGameState>(characterManager, character);
		} catch (const std::exception &e) {
			std::cerr << "Failed to load character: " << e.what() << "\n";
		}
			}
}

void CharacterLoadingState::render() {
	std::cout << "\n=== Load Character ===\n";
	if (characterFiles.empty()) {
		std::cout << "No character to load.\n";
	} else {
		for (size_t i = 0; i < characterFiles.size(); ++i) {
			std::cout << (i + 1) << ". " << characterFiles[i] << "\n";
		}
		std::cout << "Select a character to load (enter a number): ";
	}
}

bool CharacterLoadingState::isExit() const {
	return false;
}

std::unique_ptr<State> CharacterLoadingState::getNextState() {
	return std::move(nextState);
}
