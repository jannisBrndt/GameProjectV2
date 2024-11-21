#include "../../../include/Game/States/ExitState.h"
#include <iostream>

void ExitState::handleInput(InputType input) {
	// does not do anything yet
	// mock placement
	std::cout << "[ExitMenu] Handling input...\n";
}

void ExitState::update() {
	// does not do anything yet
	// mock placement
	std::cout << "[ExitMenu] Updating...";
}

void ExitState::render() {
	std::cout << "[ExitMenu] Exiting Game... Have a nice day!\n";
}

bool ExitState::isExit() const {
	std::cout << "[ExitMenu] isExit() is being called returning true.\n";
	return true;
}

std::unique_ptr<State> ExitState::getNextState() {
	std::cout << "[ExitMenu] getNextState() is being called returning nullptr.\n";
	return nullptr;
}
