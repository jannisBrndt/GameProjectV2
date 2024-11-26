#pragma once

#include "State.h"
#include "../Managers/CharacterManager.h"

class CharacterMenuState : public State {
	public:
		CharacterMenuState(std::shared_ptr<CharacterManager> manager, std::shared_ptr<Character> character);
		void render() override;
		void handleInput(InputType input) override;
		void update() override;
		bool isExit() const override;
		std::unique_ptr<State> getNextState() override;

		void viewStats();

	private:
		std::shared_ptr<CharacterManager> characterManager;
		std::unique_ptr<State> nextState;
		std::shared_ptr<Character> currentCharacter;
};
