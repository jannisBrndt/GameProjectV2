#pragma once
#include "../States/State.h"

/**
 * @class StateManager
 * @brief A manager for managing the current state and guaranteing a transition to the next one.
 */
class StateManager {
	public:
		void handleInput(State::InputType input);
		void update();
		void render();

		void changeState(std::unique_ptr<State> newState);
		State *getCurrentState () const;

	private:
		std::unique_ptr<State> currentState;
};
