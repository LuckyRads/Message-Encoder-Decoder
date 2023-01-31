#pragma once

#include "types.hpp"
#include "iomanager.hpp"
#include "coder.hpp"
#include <vector>

class StateManager
{
private:
    State currentState;
    std::vector<State> states;
    IOManager *ioManager;

public:
    StateManager();
    ~StateManager();
    void PushState(State state);
    void UpdateState();
};
