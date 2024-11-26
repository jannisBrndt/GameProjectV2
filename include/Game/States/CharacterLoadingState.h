#pragma once

#include "../Managers/CharacterManager.h"
#include "State.h"
#include <vector>

class CharacterLoadingState : public State {
	public:
		explicit CharacterLoadingState(std::shared_ptr<CharacterManager> manager);
		void handleInput(InputType input) override;
		void update() override;
		void render() override;
		bool isExit() const override;
		std::unique_ptr<State> getNextState() override;

	private:
		std::shared_ptr<CharacterManager> characterManager;
		std::vector<std::string> characterFiles;
		std::unique_ptr<State> nextState;

		int selectedOption = -1;

		void loadCharacters();
};
