#include "../include/Game/States/MainMenuState.h"
#include "../include/Game/States/ExitState.h"
#include <gtest/gtest.h>

TEST(MainMenuStateTest, RenderOutput) {
	auto manager = std::make_shared<CharacterManager>();
	MainMenuState menu(manager);

	testing::internal::CaptureStdout();
	menu.render();
	std::string output = testing::internal::GetCapturedStdout();

	EXPECT_NE(output.find("=== Main Menu ==="), std::string::npos);
	EXPECT_NE(output.find("1. Create Character"), std::string::npos);
	EXPECT_NE(output.find("2. Load Character"), std::string::npos);
	EXPECT_NE(output.find("3. Exit Game"), std::string::npos);
}

TEST(MainMenuStateTest, HandleValidInput) {
	auto manager = std::make_shared<CharacterManager>();
	MainMenuState menu(manager);

	menu.handleInput(3);
	auto nextState = menu.getNextState();

	EXPECT_NE(nextState, nullptr) << "Next state should not be null for valid input.";
	EXPECT_EQ(typeid(*nextState).name(), typeid(ExitState).name()) << "Input 3 should transition to exit state.";
}

TEST(MainMenuTestState, HandleInvalidInput) {
	auto manager = std::make_shared<CharacterManager>();
	MainMenuState menu(manager);

	testing::internal::CaptureStdout();
	menu.handleInput(99);
	std::string output = testing::internal::GetCapturedStdout();

	EXPECT_NE(output.find("Invalid input"), std::string::npos);
	EXPECT_EQ(menu.getNextState(), nullptr) << "Next state should remain null for invalid input.";
}

TEST(MainMenuStateTest, NoTransitionOnStartup) {
	auto manager = std::make_shared<CharacterManager>();
	MainMenuState menu(manager);

	EXPECT_EQ(menu.getNextState(), nullptr) << "Next state should be initially null.";
}
