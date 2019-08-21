#include "StateManager.hpp"

namespace rbk
{
void StateManager::addState(std::unique_ptr<StateBase>&& state)
{
    states.push_back(std::move(state));
}
}