#pragma once
#include "../States/State.h"

/**
 * @class StateManager
 *
 * @brief Manages lifecycles and transitions between states in the game.
 *
 * The StateManager class is responsible for maintaining the current state of the game, processessing inputs, updating the state, and transitioning between states.
 * It ensures that the game can move smoothly from one state to another.
 */
class StateManager {
	public:

		/*
		 * @brief Handles input for the current state.
		 *
		 * Passes the provided input to the active state for processing.
		 *
		 * @param input The input provided by the user.
		 */
		void handleInput(State::InputType input);


		/*
		 * @brief Updates the current state.
		 *
		 * Calls the update method on the current state to allow it to perform any necessary logic.
		 */
		void update();


		/*
		 * @brief Renders the current state.
		 *
		 * Calls the render method on the current state to display its content to the user.
		 */
		void render();


		/*
		 * @brief Changes the current state to a new one.
		 * 
		 * Replaces the current state with a new state.
		 * This method also ensures that any necessary cleanup of the previous state is performed.
		 * 
		 * @param newState A unique pointer to the new state to transition to.
		 */
		void changeState(std::unique_ptr<State> newState);


		/*
		 * @brief Retrieves the currently active state.
		 *
		 * Provides access to the current state being managed.
		 *
		 * @return A raw pointer to the current state or nullptr if no active state.
		 */
		State *getCurrentState () const;

	private:

		/*
		 * @brief The curretnly active state.
		 *
		 * A unique pointer to the currently managed state.
		 * Only one state is active at a time (unique).
		 */
		std::unique_ptr<State> currentState;
};
