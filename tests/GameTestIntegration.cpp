/*#include <gtest/gtest.h>
#include <sstream>
#include "../include/Game/Core/Game.h"
#include "../include/Game/States/MainMenuState.h"
#include "../include/Game/States/ExitState.h"

class MockGame : public Game {
	public:
		explicit MockGame(const std::string& input) {
			origCin = std::cin.rdbuf(simulatedInput.rdbuf());
			simulatedInput.str(input);
		}

		~MockGame() {
			std::cin.rdbuf(origCin);
		}


		using Game::run; // Expose run for testing
		using Game::getInputFromPlayer; // Optionally expose input for controlled testing

    		// Simulate custom input for testing
    		std::istringstream simulatedInput;

    		
		MockGame(const std::string& input) : simulatedInput(input) {
    		    std::cin.rdbuf(simulatedInput.rdbuf()); // Redirect cin to simulated input
    		}

    		~MockGame() {
    		    std::cin.rdbuf(nullptr); // Restore cin after test
    		}
		
		std::streambuf* origCin = std::cin.rdbuf();

};

TEST(GameIntegrationTest, StopsOnExitState) {
	MockGame game("3\n"); // Simulate input: "3" for exiting

    	testing::internal::CaptureStdout();
    	game.run();
    	std::string output = testing::internal::GetCapturedStdout();

    	EXPECT_NE(output.find("Exit state detected"), std::string::npos)
    	    << "Game loop should stop when ExitState is reached.";
}

TEST(GameIntegrationTest, MainMenuTransitions) {
	MockGame game("3\n"); // Simulate input: "3" for exiting

    	testing::internal::CaptureStdout();
    	game.run();
    	std::string output = testing::internal::GetCapturedStdout();

    	EXPECT_NE(output.find("=== Main Menu ==="), std::string::npos)
    	    << "Game should display the main menu initially.";
    	EXPECT_NE(output.find("Exit state detected"), std::string::npos)
    	    << "Game should transition to ExitState after input '3'.";
}

TEST(GameIntegrationTest, InputParsingValid) {
	MockGame game("1\nHero\nHuman\n100\n20\n10\n3\n"); // Simulate input: "1" and "3"

    	testing::internal::CaptureStdout();
    	game.run();
    	std::string output = testing::internal::GetCapturedStdout();

    	EXPECT_NE(output.find("Enter character name:"), std::string::npos)
    	    << "Input '1' should trigger 'Create Character' behavior.";
    	EXPECT_NE(output.find("Exit state detected"), std::string::npos)
    	    << "Input '3' should transition to ExitState.";
}
*/
