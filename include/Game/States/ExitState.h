#pragma once
#include "State.h"


/**
 * @class ExitState
 *
 * @brief Represents the exit state of a game.
 *
 * The 'ExitState' class signals the termnation of the game loop.
 * When transitioning into, it provides a message to inform the player that the game is endimg.
 */
class ExitState : public State {
	public:


		/*
		 * @brief Handles input for the exit state.
		 *
		 * This state does not process anything meaningful since the game is terminating.
		 *
		 * @param input The input provided by the user. (ignored in this state.).
		 */
		void handleInput(InputType input) override;


		/*
		 * @brief Updates the exit state.
		 *
		 * Since the game is ending, this function performs no dynamic updates.
		 */
		void update() override;
		
		/**
		 * @brief Renders the exit menu.
		 *
		 * Displays a farewell message.
		 */
		void render() override;

		/**
		 * @brief Checks if this state signals the game to exit.
		 *
		 * @return Always returns 'true' to indicate the game loop to stop.
		 */
		bool isExit() const override;


		/*
		 * @brief Retrieves the next state to transition to.
		 *
		 * The 'ExitState' does not transition to any other state, as it represents the end of the game.
		 *
		 * @return Always returns 'nullptr'.
		 */
		std::unique_ptr<State> getNextState() override;
};
