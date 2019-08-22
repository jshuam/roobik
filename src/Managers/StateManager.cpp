#include "StateManager.hpp"

namespace rbk
{
std::stack<std::unique_ptr<StateBase>> StateManager::states;

void StateManager::addState(std::unique_ptr<StateBase>&& state)
{
    states.push(std::move(state));
}
}