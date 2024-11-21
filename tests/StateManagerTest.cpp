#include "../include/Game/Managers/StateManager.h"
#include "../include/Game/States/MainMenuState.h"
#include "../include/Game/States/ExitState.h"
#include <gtest/gtest.h>
#include <memory>

TEST(StateManagerTest, InitialStateIsNull) {
    StateManager manager;
    EXPECT_EQ(manager.getCurrentState(), nullptr);
}

TEST(StateManagerTest, TransitionToMainMenu) {
	auto characterManager = std::make_shared<CharacterManager>();

	auto mainMenuState = std::make_unique<MainMenuState>(characterManager);

	StateManager manager;

	manager.changeState(std::move(mainMenuState));

	// Check if not equal to nullptr (Should be MainMenuState)	
	ASSERT_NE(manager.getCurrentState(), nullptr) << "Current state should not be nullptr anymore.";
	EXPECT_EQ(typeid(*manager.getCurrentState()).name(), typeid(MainMenuState).name()) << "Current state should be MainMenu.";
}

TEST(StateManagerTest, TransitionToNullptr) {
	StateManager manager;
	
	auto characterManager = std::make_shared<CharacterManager>();
	auto mainMenuState = std::make_unique<MainMenuState>(characterManager);
	manager.changeState(std::move(mainMenuState));

	manager.changeState(nullptr);
	EXPECT_EQ(manager.getCurrentState(), nullptr);
}
