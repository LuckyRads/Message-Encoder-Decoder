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
    IOManager *pIoManager;

public:
    StateManager();
    ~StateManager();
    void PushState(State state);
    void PopState();
    void UpdateState();
    bool HandleBaseActionIfRequested(const BaseAction &action);
};
