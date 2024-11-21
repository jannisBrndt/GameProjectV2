#include "../../../include/Game/States/State.h"

State::~State() = default;

bool State::isExit() const {
	return false;
}
