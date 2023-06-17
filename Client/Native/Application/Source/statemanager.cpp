#include "types.hpp"
#include "statemanager.hpp"
#include "menu.hpp"
#include "consolemanager.hpp"
#include "filemanager.hpp"
#include "coder.hpp"
#include <stdexcept>

IOManager *GetNewIOManager(IOType ioType)
{
    if (ioType == IOType::FILE)
        return new FileManager("file.txt", "XMLSymbol");
    else if (ioType == IOType::CONSOLE)
        return new ConsoleManager();
    else
        throw std::invalid_argument("Invalid IO type provided.");
}

/// @param action
/// @return bool that indicates if the action was handled and the execution should be stopped
bool StateManager::HandleBaseActionIfRequested(const BaseAction &action)
{
    if (action == BaseAction::QUIT)
    {
        printf("Exiting...\n");
        std::exit(0);
    }
    else if (action == BaseAction::BACK)
    {
        this->PopState();
        return true;
    }
    return false;
}

StateManager::StateManager()
{
    this->pIoManager = nullptr;
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

void StateManager::PopState()
{
    if (this->states.size() <= 1)
        return;

    this->states.pop_back();
    this->currentState = this->states.back();
}

void StateManager::UpdateState()
{
    if (this->currentState == State::IO_SELECTION)
    {
        IOType chosenIO = Menu::ChooseIO();

        if (this->HandleBaseActionIfRequested((BaseAction)chosenIO))
            return;

        if (this->pIoManager != nullptr)
            delete this->pIoManager;
        this->pIoManager = GetNewIOManager(chosenIO);

        this->PushState(State::ACTION_SELECTION);
    }
    else if (this->currentState == State::ACTION_SELECTION)
    {
        ActionType chosenAction = Menu::ChooseAction();

        if (this->HandleBaseActionIfRequested((BaseAction)chosenAction))
            return;

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
        std::string inputText = this->pIoManager->Read(message);

        std::string outputText;
        if (chosenAction == ActionType::ENCODE)
        {
            outputText = Coder::Encode(inputText);
        }
        else if (chosenAction == ActionType::DECODE)
        {
            outputText = Coder::Decode(inputText);
        }
        this->pIoManager->Write(message, outputText);
    }
    else
    {
        throw std::invalid_argument("Invalid state provided.");
    }
}