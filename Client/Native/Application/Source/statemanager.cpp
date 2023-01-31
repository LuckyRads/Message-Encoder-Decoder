#include "types.hpp"
#include "statemanager.hpp"
#include "menu.hpp"
#include "consolemanager.hpp"
#include "coder.hpp"
#include <stdexcept>

IOManager *GetNewIOManager(IOType ioType)
{
    if (ioType == IOType::FILE)
        return (IOManager *)nullptr;
    else if (ioType == IOType::CONSOLE)
        return new ConsoleManager();
    else
        throw std::invalid_argument("Invalid IO type provided.");
}

StateManager::StateManager()
{
    this->ioManager = nullptr;
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

        if (this->ioManager != nullptr)
            delete this->ioManager;
        this->ioManager = GetNewIOManager(chosenIO);

        this->PushState(State::ACTION_SELECTION);
    }
    else if (this->currentState == State::ACTION_SELECTION)
    {
        ActionType chosenAction = Menu::ChooseAction();

        // TODO: Use enum as integer/name
        std::string message;
        if (chosenAction == ActionType::ENCODE)
        {
            message = "encode";
        }
        else if (chosenAction == ActionType::DECODE)
        {
            message = "decode";
        }
        std::string inputText = this->ioManager->Read(message);

        std::string outputText;
        if (chosenAction == ActionType::ENCODE)
        {
            outputText = Coder::Encode(inputText);
        }
        else if (chosenAction == ActionType::DECODE)
        {
            outputText = Coder::Decode(inputText);
        }
        this->ioManager->Write(message, outputText);
    }
    else
    {
        throw std::invalid_argument("Invalid state provided.");
    }
}