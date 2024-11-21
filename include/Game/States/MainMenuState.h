#pragma once
#include "State.h"
#include "../Managers/CharacterManager.h"
#include <memory>

/**
 * @class MainMenuState
 * @brief The main menu.
 */
class MainMenuState : public State {
	public:
		MainMenuState(std::shared_ptr<CharacterManager> manager);
		/**
		 * @brief Renders the main menu.*/
		void render() override;

		/**
		 * @brief Interprets the user input.
		 * @param input Normalized user input.
		 */
		void handleInput(InputType input) override;
		void update() override;

		bool isExit() const override;
		std::unique_ptr<State> getNextState() override;

	private:
		std::unique_ptr<State> nextState = nullptr;

		std::shared_ptr<CharacterManager> characterManager;
};
