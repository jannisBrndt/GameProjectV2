#pragma once
#include "../../../include/Game/Managers/StateManager.h"
#include "../../../include/Game/Managers/CharacterManager.h"
#include "../../../include/Game/States/State.h"

/**
 * @class Game
 * @brief The class incorporating the core game loop.
 */
class Game {
	public:
		// constructor
		Game();

		// main game loop
		void run();

	private:
		// manages the active game state
		StateManager stateManager;
		std::shared_ptr<CharacterManager> characterManager;
	protected:
		/**
		 * @brief Converts raw input into a format that can be processed by individual states.
		 * @return Returns State::InputType, std::variant<int, char, std::string>
		 */
		State::InputType getInputFromPlayer();
};
