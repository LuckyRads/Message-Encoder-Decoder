#include "types.hpp"
#include "statemanager.hpp"
#include "menu.hpp"

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

void StateManager::UpdateState()
{
    if (this->currentState == State.ACTION_SELECTION)
    {
        Menu::ChooseIO()
    }
}