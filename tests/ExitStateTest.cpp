#include "../include/Game/States/ExitState.h"
#include <gtest/gtest.h>

TEST(ExitStateTest, RenderOutput) {
	ExitState exitState;

	testing::internal::CaptureStdout();
	exitState.render();
	std::string output = testing::internal::GetCapturedStdout();

	EXPECT_NE(output.find("Exiting Game... Have a nice day!"), std::string::npos);
}

TEST(ExitStateTest, IsExit) {
	ExitState exitState;
	EXPECT_TRUE(exitState.isExit()) << " it should return true.";
}

TEST(ExitStateTest, NoNewState) {
	ExitState exitState;

	EXPECT_EQ(exitState.getNextState(), nullptr) << "After exit there should not be any state.";
}
