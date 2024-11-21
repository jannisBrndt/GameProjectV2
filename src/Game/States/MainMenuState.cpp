#include "../../../include/Game/States/MainMenuState.h"
#include "../../../include/Game/States/ExitState.h"
#include "../../../include/Game/States/CharacterCreationState.h"
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
	if (std::holds_alternative<int>(input)) {
		int choice = std::get<int>(input);

		switch (choice) {
			case 1:
				std::cout << "Creating character...\n";
				nextState = std::make_unique<CharacterCreationState>(characterManager);
				break;
			case 2:
				std::cout << "[MainMenuState] Loading character...\n";
				{
					auto availableCharacters = characterManager->listAvailableCharacters();
					if(availableCharacters.empty()) {
						std::cout << "No characters available to load.\n";
						break;
					}

					std::cout << "\nAvailable Characters:\n";
					for (size_t i = 0; i <availableCharacters.size(); ++i) {
						std::cout << i + 1 << ". " << availableCharacters[i] << "\n";
					}

					std::cout << "Select a character to load (enter a number): ";
					int selectedIndex;
					std::cin >> selectedIndex;

					if (std::cin.fail() || selectedIndex < 1 || selectedIndex > static_cast<int>(availableCharacters.size())) {
						std::cerr << "Invalid selection.\n";
						std::cin.clear();
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					} else {
						try {
							auto character = characterManager->loadCharacterFromFile(availableCharacters[selectedIndex - 1]);
							std::cout << "Character loaded successfully:\n";
							std::cout << "Name: " << character->getName() << "\n";
							std::cout << "Race: " << character->getRace() << "\n";
							std::cout << "Health: " << character->getStats().getMaxHealth() << "\n";
							std::cout << "Attack: " << character->getStats().getAttackDamage() << "\n";
							std::cout << "Armor: " << character->getStats().getArmor() << "\n";
						} catch (const std::exception& e) {
							std::cerr << "Failed to load character: " << e.what() << "\n";
						}
					}
				}
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
