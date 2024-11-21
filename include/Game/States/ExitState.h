#pragma once
#include "State.h"

/**
 * @class ExitState
 * @brief This class serves as an exit point for the game.
 */
class ExitState : public State {
	public:
		void handleInput(InputType input) override;
		void update() override;
		
		/**
		 * @brief Renders the exit menu.
		 */
		void render() override;

		/**
		 * @brief Signals to exit the main game loop.
		 */
		bool isExit() const override;

		std::unique_ptr<State> getNextState() override;
};
