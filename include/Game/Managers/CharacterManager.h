#pragma once

#include "../Entities/Character.h"
#include "../States/State.h"
#include <memory>
#include <unordered_map>
#include <vector>
#include <map>


/*
 * @class CharacterManager
 *
 * @brief Manages the creation, savig and loading of characters.
 *
 * The CharacterManager class handles operations related to characters.
 * Including their creation, retrieval and saving to JSON files, and loading from JSON files.
 * It maintains an internal map to track loaded characters.
 */
class CharacterManager {
	private:

		std::unordered_map<std::string, std::shared_ptr<Character>> characters; // A map storing characters by their name.
		const std::string saveDirectory = "savings/";				// The directory where character files are saved.
		

		/*
		 * @brief Ensures the directory exists.
		 *
		 * Creates the save directory if it does not already exists.
		 * This is called before saving or listing characters.
		 */
		void ensureSaveDirectoryExists() const;

	public:


		/*
		 * @brief Constructs a CharacterManager object.
		 */
		CharacterManager();

		
		/*
		 * @brief Loads a character from a JSON file.
		 *
		 * Reads a JSON file and creates a character based on the data.
		 *
		 * @param filePath The file path to the JSON file containing character data
		 * @return A shared pointer to the loaded character.
		 * @throws std::runtime_error If the file annot be opened or the JSON is invalid.
		 */
		std::shared_ptr<Character> loadCharacterFromFile(const std::string& filePath);


		/*
		 * @brief Retrieves a loaded character by name.
		 *
		 * Searches the internal character map for a character with the given name.
		 *
		 * @param name The name of the character to retrieve.
		 * @return A shared pointer to the character object, or 'nullptr' if not found.
		 */
		std::shared_ptr<Character> getCharacter(const std::string& name) const;


		/*
		 * @brief Saves a character to a JSON file.
		 *
		 * Serializes the character's data and writes it to a JSON file.
		 * Ensures the save directory exists before saving.
		 *
		 * @param filePath The file path where the character data will be saved.
		 * @param character The Character object to save.
		 * @throws std::runtime_error If the file cannot be written to.
		 */
		void saveCharacterToFile(const std::string& filePath, const Character& character);

		
		/*
		 * @brief Creates a new character.
		 *
		 * Constructs a new character object with the specified attributes and stores it in the internal map.
		 *
		 * @param name The name of the character.
		 * @param race The race of the character.
		 * @param maxHealth The maximum health value of a character.
		 * @param attackDamage The attack damage value of a character.
		 * @param armor The armor value of a character.
		 * @return A shared pointer to the newly created Character object.
		 */
		std::shared_ptr<Character> createCharacter(const std::string& name, const std::string& race, int maxHealth, int attackDamage, int armor);


		/*
		 * @brief Lists all available characters in the save directory.
		 *
		 * Scans the save directory for JSON files and retrieves their names.
		 *
		 * @return A vector containing the names of all available characters.
		 */
		std::vector<std::string> listAvailableCharacters() const;


		std::vector<std::pair<std::string, State::InputType>> getCharacterStats(const std::string& characterName) const;
};
