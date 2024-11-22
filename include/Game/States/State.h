#pragma once

#include <string>

/**
 * @class State
 *
 * @brief Abstract base class representing a game state.
 *
 * The State class defines the interfaces for all states in game.
 * Concrete states should inherit from this class and implement its virtual functions.
 * The State system enables transitions between different parts of the game (e.g. menus, gameplay, etc).
 */

class State {
	public:


		/// Alias for the type of input that states handle.
		using InputType = std::variant<int, char, std::string>;


		/*
		 * @brief Virtual destructor for save polymorphic deletion.
		 */
		virtual ~State();

		
		/*
		 * @brief Handles the input for the current state.
		 *
		 * Processes user input and updates the state accordingly.
		 *
		 * @param input The input provided by the user.
		 */
		virtual void handleInput(InputType input) = 0;

		
		/*
		 * @brief Updates the state.
		 *
		 * This method is periodically called to perform any necessary updates (e.g. animations, etc).
		 */
		virtual void update() = 0;


		/*
		 * @brief Renders the current state to the screen.
		 *
		 * This method is responsible for displaying the current state (e.g. menu options).
		 */
		virtual void render() = 0;


		/*
		 * @brief Checks if the state signals an exit from the game.
		 *
		 * @return 'true' if the states indicates that the game should be terminated, 'false' otherwise.
		 */
		virtual bool isExit() const;


		/*
		 * @brief Retrieves the next state for transition.
		 *
		 * If the current state determines that a transition should occur, this method provides the next state.
		 *
		 * @return A unique pointer to the next state, or nullptr if no transition is required.
		 */
		virtual std::unique_ptr<State> getNextState() = 0;
};
