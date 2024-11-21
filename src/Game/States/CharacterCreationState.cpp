#include "../../../include/Game/States/CharacterCreationState.h"
#include "../../../include/Game/States/MainMenuState.h"
#include <ios>
#include <iostream>
#include <limits>
#include <memory>

CharacterCreationState::CharacterCreationState(std::shared_ptr<CharacterManager> manager)
	: characterManager(manager), nextState(nullptr), needsInput(true) {}

void CharacterCreationState::render() {
	if (currentStep == InputStep::DONE) {
		std::cout << "=== Character Creation ===\nCharacter creation complete.\n";
	} else if (needsInput) {
		std::cout << "\n=== Character Creation ===\n";
		std::cout << "Enter character details as prompted.\n";

		switch (currentStep) {
			case InputStep::NAME:
				std::cout << "Enter character's name: ";
				break;
			case InputStep::RACE:
				std::cout << "Enter character's race: ";
				break;
			case InputStep::HEALTH:
				std::cout << "Enter character's health: ";
				break;
			case InputStep::ATTACK:
				std::cout << "Enter character's attack: ";
				break;
			case InputStep::ARMOR:
				std::cout << "Enter character's armor: ";
				break;
			default:
				break;
		}
		needsInput = false;
	}
}

void CharacterCreationState::handleStringInput(const std::string& input) {
	switch (currentStep) {
		case InputStep::NAME:
			name = input;
			currentStep = InputStep::RACE;
			needsInput = true;
			break;
		case InputStep::RACE:
			race = input;
			currentStep = InputStep::HEALTH;
			needsInput = true;
			break;
		default:
			std::cerr << "[CharacterCreationState] Unexpected string input.\n";
			break;
	}
}

void CharacterCreationState::handleNumericInput(int input) {
	switch (currentStep) {
		case InputStep::HEALTH:
			if (input > 0) {
				maxHealth = input;
				currentStep = InputStep::ATTACK;
				needsInput = true;
			} else {
				std::cerr << "[CharacterCreationState] Invalid health value. Please try again.\n";
			}
			break;
		case InputStep::ATTACK:
			if (input > 0) {
				attackDamage = input;
				currentStep = InputStep::ARMOR;
				needsInput = true;
			} else {
				std::cerr << "[CharacterCreationState] Invalid attack value. Please try again.\n";
			}
			break;
		case InputStep::ARMOR:
			if (input > 0) {
				armor = input;
				currentStep = InputStep::DONE;
				needsInput = true;
			} else {
				std::cerr << "[CharacterCreationState] Invalid armor value. Please try again.\n";
			}
			break;
		default:
			std::cerr << "[CharacterCreationState] Unexpected numeric input.\n";
			break;
	}
}

void CharacterCreationState::finalizeCharacterCreation() {
	auto character = characterManager->createCharacter(name, race, maxHealth, attackDamage, armor);
	characterManager->saveCharacterToFile(name + ".json", *character);

	std::cout << "[CharacterCreationState] Character created successfully and save to " << name << ".json" << ".\n";
	nextState = std::make_unique<MainMenuState>(characterManager);
	currentStep = InputStep::DONE;
}

void CharacterCreationState::handleInput(InputType input) {
	if (currentStep == InputStep::DONE) return;

	if (std::holds_alternative<std::string>(input)) {
		handleStringInput(std::get<std::string>(input));
	} else if (std::holds_alternative<int>(input)) {
		handleNumericInput( std::get<int>(input));
	} else {
		std::cerr << "[CharacterCreationState] Unexpected input type.\n";
	}

	if (currentStep == InputStep::DONE) {
		finalizeCharacterCreation();
	}
}

void CharacterCreationState::update() {
}

bool CharacterCreationState::isExit() const {
	return false;
}

std::unique_ptr<State> CharacterCreationState::getNextState() {
	return currentStep == InputStep::DONE ? std::move(nextState) : nullptr;
}

bool CharacterCreationState::isDone() const {
	return currentStep == InputStep::DONE;
}
