#include "statemanager.hpp"

StateManager::StateManager()
{
}

StateManager::~StateManager()
{
}

void StateManager::PushState(State state)
{
    this->states.push_back(state);
    this->currentState = state;
}
