#pragma once

#include "../../../include/Game/States/State.h"
#include "../../../include/Game/Managers/CharacterManager.h"


/*
 * @class CharacterCreationState
 *
 * @brief Handles the character creation process.
 *
 * The CharacterCreationState class guides the user through creating a new character step by step.
 * It collects input for attributes such as name, race health, attack and armor, validates them and creates the character using the CharacterManager.
 * Once Complete it transitions to the main menu.
 */
class CharacterCreationState : public State {
	private:

		/*
		 * @brief Manages character creation and saving.
		 *
		 * A shared pointer to the CharacterManager for creating and managing characters during their creation process.
		 */
		std::shared_ptr<CharacterManager> characterManager;


		/*
		 * @brief The next state to transition to after character creation.
		 */
		std::unique_ptr<State> nextState;


		/*
		 * @enum InputStep
		 *
		 * @brief Represents the current step in the character creation process.
		 */
		enum class InputStep { NAME, RACE, HEALTH, ATTACK, ARMOR, DONE };


		/*
		 * @brief Tracks the current step of character creation.
		 *
		 * Is set to start with the name.
		 */
		InputStep currentStep = InputStep::NAME;


		/*
		 * @brief The name of the character being created.
		 */
		std::string name;


		/*
		 * @brief The race of the character being created.
		 */
		std::string race;


		/*
		 * @brief The health of the character being created.
		 */
		int maxHealth;


		/*
		 * @brief The attack damage of the character being created.
		 */
		int attackDamage;

		/*
		 * @brief The armor of the character being created.
		 */
		int armor;

	public:

		/*
		 * @brief Creates a new CharacterCreationState.
		 *
		 * @param manager A shared pointer to the CharacterManager for creating and managing characters.
		 */
		explicit CharacterCreationState(std::shared_ptr<CharacterManager> manager);


		/*
		 * @brief Renders the current step of character creation process.
		 *
		 * Displays prompts for user input based on the current step.
		 * Shows a comletion message once the proecess is done.
		 */
		void render() override;


		/*
		 * @brief Handles user input during character creation proecess.
		 *
		 * Directs input to either handleStringInput or handleNumericInput depending on the current step.
		 * Finalizes the creation process once all input was set.
		 *
		 * @param input The input provided by the user, either a string or an integer.
		 */
		void handleInput(InputType input) override;


		/*
		 * @brief Updates the state.
		 *
		 * Placeholder for any future dynamic updates to the state.
		 */ 
		void update() override;


		/*
		 * @brief Checks if the state signals to exit the game.
		 *
		 * @return Always returns false as this state does not terminate the game.
		 */
		bool isExit() const override;

		/*
		 * @brief Retrieves the next state to transition to after character creation.
		 *
		 * Returns a pointer to the next state (main menu), if character creation is completed.
		 * Otherwise, return nullptr.
		 *
		 * @return A unique pointer to the next state or nullptr.
		 */
		std::unique_ptr<State> getNextState() override;


		/*
		 * @brief Processes string input for specific character attributes.
		 *
		 * Handles input for character name and race.
		 * Advances to the next step upon valid completion.
		 *
		 * @param input The string input provided by the user.
		 */
		void handleStringInput(const std::string& input);


		/*
		 * @brief Processes integer input for specific character attributes.
		 *
		 * Handles input for characters health, attack and armor.
		 * Validates the input and advances to the next step.
		 *
		 * @param input The integer input provided by the user.
		 */
		void handleNumericInput(int input);


		/* @brief Finalizes the charater creation process.
		 *
		 * Creates the character using collected attributes and saves it to JSON.
		 * Sets the state to MainMenuState.
		 */
		void finalizeCharacterCreation();


		/*
		 * @brief Signals if the state currently awaits user input.
		 */
		bool needsInput = true;


		/*
		 * @brief Checks if character creation process is complete.
		 *
		 * @return True if all attributes have been set otherwise false.
		 */
		bool isDone() const;
};
