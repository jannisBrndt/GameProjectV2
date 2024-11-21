#pragma once

#include "../../../include/Game/States/State.h"
#include "../../../include/Game/Managers/CharacterManager.h"

class CharacterCreationState : public State {
	private:
		std::shared_ptr<CharacterManager> characterManager;
		std::unique_ptr<State> nextState;

		// Enum to track current step of character creation 
		enum class InputStep { NAME, RACE, HEALTH, ATTACK, ARMOR, DONE };

		// Start with name
		InputStep currentStep = InputStep::NAME;

		// Variables to hold character info
		std::string name;
		std::string race;
		int maxHealth;
		int attackDamage;
		int armor;

	public:
		explicit CharacterCreationState(std::shared_ptr<CharacterManager> manager);

		void render() override;
		void handleInput(InputType input) override;
		void update() override;
		bool isExit() const override;
		std::unique_ptr<State> getNextState() override;

		void handleStringInput(const std::string& input);
		void handleNumericInput(int input);
		void finalizeCharacterCreation();

		bool needsInput = true;

		bool isDone() const;
};
