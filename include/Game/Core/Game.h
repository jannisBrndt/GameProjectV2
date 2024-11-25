#pragma once
#include "../../../include/Game/Managers/StateManager.h"
#include "../../../include/Game/Managers/CharacterManager.h"
#include "../../../include/Game/States/State.h"

/**
 * @class Game
 *
 * @brief Manages the core gameplay loop and initializes the game.
 *
 * The Game class is the central component of the application.
 * It incorporates the gameloop, manages the game state, and processes player input.
 * It interacts with the StageManager to handle state transitions and the CharacterManager to manage game characters.
 */
class Game {
	public:

		/*
		 * @brief Constructs the Game object and initializes the starting state.
		 */
		Game();


		/*
		 * @brief Executes the main game loop.
		 *
		 * - Renders the current state
		 * - Handles player input and forwards it to the state.
		 * - Updates the game logic within the current state.
		 * - Transitions between states when necessary.
		 */
		void run();

	private:

		/*
		 * @brief Manages the active state.
		 *
		 * The StateManager is responsible for rendering, updating and transitioning between states.
		 */
		StateManager stateManager;
		

		/*
		 * @brief Shared manager for creating, saving and loading characters.
		 *
		 * The CharacterManager handles character related operations and is shared across staes.
		 */
		std::shared_ptr<CharacterManager> characterManager;

	protected:

		/**
		 * @brief Processes raw input from the player and normalizes it for use by the states.
		 *
		 * Converts raw input (as strings, characters or integers) into a format compatible with state input handling.
		 *
		 * @return A State::InputType which is a std::variant<int, char, std::string>.
		 */
		State::InputType getInputFromPlayer();
};
