#pragma once
#include "State.h"
#include "../Managers/CharacterManager.h"
#include <memory>

/**
 * @class MainMenuState
 *
 * @brief Represents the main menu
 *
 * The MainMenuState class manages the interactions and options available in the game's main menu.
 * For example creating a character, loading a character or exiting the game.
 * For this the state transitions to other states like 'CharacterCreationState' or 'ExitState' based on user input.
 */
class MainMenuState : public State {
	public:
	

		/*
		 * @brief Constructs a 'MainMenuState' with a character manager.
		 *
		 * @param manager A shared pointer to the 'CharacterManager' for managing characters.
		 */
		MainMenuState(std::shared_ptr<CharacterManager> manager);


		/**
		 * @brief Renders the main menu to the screen.
		 *
		 * Displays the available menu options (e.g. create character, load character, exit game).
		 */
		void render() override;


		/**
		 * @brief Handles input for the main menu.
		 *
		 * Processes user input to navigate the main menu.
		 * - '1' : Transition to 'CharacterCreationState'.
		 * - '2' : Load an existing character using the 'CharacterManager'.
		 * - '3' : Transition to 'ExitState' to exit the game.
		 *
		 * @param input The input provided by the user.
		 */
		void handleInput(InputType input) override;


		/*
		 * @brief Updates the main menu.
		 *
		 * Currently does nothing but is included for consistency and future enhancements.
		 */
		void update() override;


		/*
		 * @brief Checks if the main menu signals an exit from the game.
		 *
		 * @return Always returns 'false' as this state does not cause to exit the game,
		 */
		bool isExit() const override;


		/*
		 * @brief Retrieves the next state to transition to.
		 *
		 * If a valid menu option is selected, this method provides the appropriate state to transition to.
		 * Otherwise, it returns nullptr to remain in the current state.
		 */
		std::unique_ptr<State> getNextState() override;


	private:


		/// The next state to transition to after processing input.
		std::unique_ptr<State> nextState = nullptr;
	

		/// A shared pointer to the character manager for handling character-related operations.
		std::shared_ptr<CharacterManager> characterManager;
};
