#pragma once

#include "types.hpp"
#include <vector>

class StateManager
{
private:
    State currentState;
    std::vector<State> states;

public:
    StateManager();
    ~StateManager();
    void PushState(State state);
};
