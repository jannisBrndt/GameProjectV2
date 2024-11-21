#include "../../../include/Game/Managers/StateManager.h"
// For debugging
#include <iostream>

// change the current state to new state
void StateManager::changeState(std::unique_ptr<State> newState) {
	if (currentState) {
		// DEBUG
		std::cout << "[State Manager] Exiting current state: " << typeid(*currentState).name() << "\n";
		currentState.reset();
	} else {
		std::cout << "[State Manager] No current state to exit.\n";
	}

	currentState = std::move(newState);

	// DEBUG
	if (currentState) {
		std::cout << "[State Manager] Transitioned to new state: " << typeid(*currentState).name() << "\n";
	} else {
		std::cerr << "[State Manager] Error: Transitioned to a null state!\n";
	}
}

// get a pointer to the current state
State *StateManager::getCurrentState() const {
	return currentState.get();
}

// render the current state
void StateManager::render() {
	if (currentState) {
		currentState->render(); // execute render method of new state
	} else {
		std::cerr << "[State Manager] Error: no current state to render!\n";
	}
}

// handle input for the current state
void StateManager::handleInput(State::InputType input) {
	if (currentState) {
		currentState->handleInput(input); // execute handleInput method of new state
	} else {
		std::cerr << "[State Manager] Error: no current state to handle input.\n";
	}
}

// update the current state
void StateManager::update() {
	if (currentState) {
		currentState->update();  // execute update method of new state
	} else {
		std::cerr << "[State Manager] Error: no current state to update.\n";
	}
}
