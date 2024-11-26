#include "../../../include/Game/Managers/CharacterManager.h"
#include <filesystem>
#include <fstream>
#include <nlohmann/json.hpp>
#include <stdexcept>

using json = nlohmann::json;

CharacterManager::CharacterManager() {
	ensureSaveDirectoryExists();
}

void CharacterManager::ensureSaveDirectoryExists() const {
	if (!std::filesystem::exists(saveDirectory)) {
		std::filesystem::create_directory(saveDirectory);
	}
}

std::shared_ptr<Character> CharacterManager::loadCharacterFromFile(const std::string& fileName) {

	std::ifstream file(saveDirectory + fileName);
	if (!file.is_open()) {
		throw std::runtime_error("Failed to open file: " + fileName);
	}

	json characterData;
	file >> characterData; // Parse the json file
			       //
	// Validation
	if (!characterData.contains("name") || !characterData.contains("race") || !characterData.contains("maxHealth") || !characterData.contains("attackDamage") || !characterData.contains("armor")) {
		throw std::runtime_error("Invalid JSON format: Missing required fields.");
	}

	if (!characterData["maxHealth"].is_number() || !characterData["attackDamage"].is_number() || !characterData["armor"].is_number()) {
		throw std::runtime_error("Invalid JSON format: Expected numeric values.");
	}

	// Extract character properties
	std::string name = characterData["name"];
	std::string race = characterData["race"];
	int maxHealth = characterData["maxHealth"];
	int attackDamage = characterData["attackDamage"];
	int armor = characterData["armor"];

	// create the character
	auto character = std::make_shared<Character>(name, race, maxHealth, attackDamage, armor);
	
	// Store the characer in the manager
	characters[name] = character;

	return character;
}

std::shared_ptr<Character> CharacterManager::getCharacter(const std::string& name) const {
	auto it = characters.find(name);
	if (it != characters.end()) {
		return it->second;
	}

	return nullptr;
}

void CharacterManager::saveCharacterToFile(const std::string& fileName, const Character& character) {
	ensureSaveDirectoryExists();

	std::ofstream file(saveDirectory + fileName);
	if (!file.is_open()) {
		throw std::runtime_error("Failed to open file for saving: " + fileName);
	}

	json characterData = {
		{"name", character.getName()},
		{"race", character.getRace()},
		{"maxHealth", character.getStats().getMaxHealth()},
		{"attackDamage", character.getStats().getAttackDamage()},
		{"armor", character.getStats().getArmor()}
	};

	file << characterData.dump(4);
	file.close();
}

std::shared_ptr<Character> CharacterManager::createCharacter(const std::string& name, const std::string& race, int maxHealth, int attackDamage, int armor) {

	// Create a new character
	auto character = std::make_shared<Character>(name, race, maxHealth, attackDamage, armor);

	// Add character to the manager
	characters[name] = character;

	return character;
}

std::vector<std::string> CharacterManager::listAvailableCharacters() const {
	std::vector<std::string> characters;

	ensureSaveDirectoryExists();

	for (const auto& entry : std::filesystem::directory_iterator(saveDirectory)) {
		if (entry.is_regular_file() && entry.path().extension() == ".json") {
			characters.push_back(entry.path().filename().string());
		}
	}

	return characters;
}

std::vector<std::pair<std::string, State::InputType>> CharacterManager::getCharacterStats(const std::string& characterName) const {
	auto it = characters.find(characterName);
	if (it != characters.end()) {
		return {
			{"Name", it->second->getName()},
			{"Race", it->second->getRace()},
			{"Level", it->second->getLevel()},
			{"Exp", it->second->getExperience()},
			{"Health", it->second->getStats().getMaxHealth()},
			{"Attack", it->second->getStats().getAttackDamage()},
			{"Armor", it->second->getStats().getArmor()}
		};
	}
	return {};
}
