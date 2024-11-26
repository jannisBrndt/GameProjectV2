#include "../include/Game/States/CharacterCreationState.h"
#include "../include/Game/Managers/CharacterManager.h"
#include "../include/Game/States/MainMenuState.h"
#include <sstream>
#include <iostream>
#include <gtest/gtest.h>

TEST(CharacterCreationStateTest, RenderOutput) {
	auto manager = std::make_shared<CharacterManager>();
	CharacterCreationState state(manager);

	testing::internal::CaptureStdout();
	state.render();
	std::string output = testing::internal::GetCapturedStdout();

	EXPECT_NE(output.find("=== Character Creation ==="), std::string::npos);
	EXPECT_NE(output.find("Enter character details as prompted."), std::string::npos);
}

TEST(CharacterCreationStateTest, HandleValidInput) {
	auto manager = std::make_shared<CharacterManager>();
	CharacterCreationState state(manager);

	// Simulate valid input 
	state.handleStringInput("Hero");
	state.handleStringInput("Human");
	state.handleNumericInput(100);
	state.handleNumericInput(20);
	state.handleNumericInput(10);

	state.handleInput("");

	// Validate Character Creation
	auto character = manager->getCharacter("Hero");
	ASSERT_NE(character, nullptr);
	EXPECT_EQ(character->getName(), "Hero");
	EXPECT_EQ(character->getRace(), "Human");
	EXPECT_EQ(character->getStats().getMaxHealth(), 100);
	EXPECT_EQ(character->getStats().getAttackDamage(), 20);
	EXPECT_EQ(character->getStats().getArmor(), 10);

	// Validate State Transition
	//auto nextState = state.getNextState();
	//ASSERT_NE(nextState, nullptr);
	//EXPECT_EQ(typeid(*nextState), typeid(MainMenuState));
}

TEST(CharacterCreationStateTest, HandleInvalidinput) {
	auto manager = std::make_shared<CharacterManager>();
	CharacterCreationState state(manager);

	// simulate invalid input
	std::istringstream input("Villain\nOrc\n-50\n-20\n-5\n");
	std::cin.rdbuf(input.rdbuf());

	// Capture the output of handleInput 
	testing::internal::CaptureStdout();
	state.handleInput({});
	std::string output = testing::internal::GetCapturedStdout();

	// Validate no character was created
	auto character = manager->getCharacter("Villain");
	ASSERT_TRUE(character == nullptr) << "CharacterManager should not have stored an invalid character.";

	// Validate no state Transition
	auto nextState = state.getNextState();
	ASSERT_TRUE(nextState == nullptr) << "Next state should not be set on invalid input.";
}
