#include "../include/Game/States/ExitState.h"
#include "../include/Game/States/MainMenuState.h"
#include "../include/Game/Core/Game.h"
#include "../include/Game/Managers/StateManager.h"
#include <gtest/gtest.h>
#include <sstream>
#include <variant>
#include <iostream>

class MockGame : public Game {
	public:
		using Game::getInputFromPlayer;
	};

TEST(GameTest, ParseValidInput) {
	MockGame game;

	std::istringstream input("1\n");
	std::cin.rdbuf(input.rdbuf());

	auto result = game.getInputFromPlayer();
	ASSERT_TRUE(std::holds_alternative<int>(result));
	EXPECT_EQ(std::get<int>(result), 1);
}

TEST(GameTest, ParseInvalidInput) {
	MockGame game;

	std::istringstream input("test\n");
	std::cin.rdbuf(input.rdbuf());

	auto result = game.getInputFromPlayer();
	ASSERT_TRUE(std::holds_alternative<std::string>(result));
	EXPECT_EQ(std::get<std::string>(result), "test");
}
