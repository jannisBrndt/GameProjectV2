#pragma once

#include <string>

/**
 * @class State
 * @brief The base class for all states to inherit from.
 */

class State {
	public:
		virtual ~State();
		using InputType = std::variant<int, char, std::string>;
		
		virtual void handleInput(InputType input) = 0;

		virtual void update() = 0;
		virtual void render() = 0;
		virtual bool isExit() const;

		// "queues" the next stage for transitioning to it
		virtual std::unique_ptr<State> getNextState() = 0;
};
