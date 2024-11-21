#include "../include/Game/Managers/CharacterManager.h"
#include <filesystem>
#include <fstream>
#include <nlohmann/json.hpp>
#include <gtest/gtest.h>

TEST(CharacterManagerTest, CreateCharacter) {
	CharacterManager manager;

	auto character = manager.createCharacter("Hero", "Human", 100, 20, 10);
	ASSERT_NE(character, nullptr);

	EXPECT_EQ(character->getName(), "Hero");
	EXPECT_EQ(character->getRace(), "Human");
	EXPECT_EQ(character->getStats().getMaxHealth(), 100);
	EXPECT_EQ(character->getStats().getAttackDamage(), 20);
	EXPECT_EQ(character->getStats().getArmor(), 10);

	auto retrieved = manager.getCharacter("Hero");
	ASSERT_NE(retrieved, nullptr);
	EXPECT_EQ(retrieved->getName(), "Hero");
}

TEST(CharacterManagerTest, SaveCharacterToFile) {
	CharacterManager manager;
	auto character = manager.createCharacter("Hero", "Human", 100, 20, 10);

	manager.saveCharacterToFile("Hero.json", *character);

	// Verify file exists
	std::ifstream file("savings/Hero.json");
	ASSERT_TRUE(file.is_open());

	nlohmann::json jsonData;
	file >> jsonData;

	EXPECT_EQ(jsonData["name"], "Hero");
	EXPECT_EQ(jsonData["race"], "Human");
	EXPECT_EQ(jsonData["maxHealth"], 100);
	EXPECT_EQ(jsonData["attackDamage"], 20);
	EXPECT_EQ(jsonData["armor"], 10);

	file.close();

	// Clean up temporary files
	ASSERT_EQ(std::remove("savings/Hero.json"), 0) << "Failed to remove test file.";
}

TEST(CharacterManagerTest, LoadCharacterFromFile) {
	CharacterManager manager;

	// temporary file
	std::string filePath = "Hero.json";
	nlohmann::json j = {
		{"name", "Hero"},
		{"race", "Human"},
		{"maxHealth", 100},
		{"attackDamage", 20},
		{"armor", 10}
	};

	std::ofstream file("savings/Hero.json");
	ASSERT_TRUE(file.is_open()) << "Failed to create temporary JSON file.";
	file << j.dump(4);
	file.close();
	// ------ works

	// load the character
	auto character = manager.loadCharacterFromFile("Hero.json");
	ASSERT_NE(character, nullptr);
	EXPECT_EQ(character->getName(), "Hero");
	EXPECT_EQ(character->getRace(), "Human");
	EXPECT_EQ(character->getStats().getMaxHealth(), 100);
	EXPECT_EQ(character->getStats().getAttackDamage(), 20);
	EXPECT_EQ(character->getStats().getArmor(), 10);

	// Clean up temporary files
	ASSERT_EQ(std::remove("savings/Hero.json"), 0) << "Failed to remove test file.";
}
