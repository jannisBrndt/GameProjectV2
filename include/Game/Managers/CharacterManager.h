#pragma once

#include "../Entities/Character.h"
#include <memory>
#include <unordered_map>
#include <vector>

class CharacterManager {
	private:
		std::unordered_map<std::string, std::shared_ptr<Character>> characters; // stores characters by name 
		const std::string saveDirectory = "savings/";

		void ensureSaveDirectoryExists() const;

	public:
		CharacterManager();

		// load a character from a json file
		std::shared_ptr<Character> loadCharacterFromFile(const std::string& filePath);

		// retrieve a loaded character
		std::shared_ptr<Character> getCharacter(const std::string& name) const;

		// save a character to a json file
		void saveCharacterToFile(const std::string& filePath, const Character& character);


		std::shared_ptr<Character> createCharacter(const std::string& name, const std::string& race, int maxHealth, int attackDamage, int armor);

		std::vector<std::string> listAvailableCharacters() const;
};
