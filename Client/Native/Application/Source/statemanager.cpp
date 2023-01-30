#include "types.hpp"
#include "statemanager.hpp"
#include "menu.hpp"
#include <stdexcept>

StateManager::StateManager()
{
    this->PushState(State::IO_SELECTION);
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
    if (this->currentState == State::IO_SELECTION)
    {
        IOType chosenIO = Menu::ChooseIO();
        this->PushState(State::ACTION_SELECTION);
    }
    else if (this->currentState == State::ACTION_SELECTION)
    {
        Menu::ChooseAction();
    }
    else
    {
        throw std::invalid_argument("Invalid state provided.");
    }
}