#ifndef TYPES_HPP
#define TYPES_HPP

#include <map>
#include <string>
#include <type_traits>

enum class BaseAction
{
    BACK = -1,
    QUIT = 0
};

enum class State
{
    BACK = (int)BaseAction::BACK,
    QUIT = (int)BaseAction::QUIT,
    IO_SELECTION = 1,
    ACTION_SELECTION = 2
};

enum class IOType
{
    BACK = (int)BaseAction::BACK,
    QUIT = (int)BaseAction::QUIT,
    IO_SELECTION = 1,
    FILE = 1,
    CONSOLE = 2
};

enum class ActionType
{
    BACK = (int)BaseAction::BACK,
    QUIT = (int)BaseAction::QUIT,
    IO_SELECTION = 1,
    ENCODE = 1,
    DECODE = 2
};

template <typename Enumeration>
auto as_integer(Enumeration const value) -> typename std::underlying_type<Enumeration>::type;

const std::map<char, BaseAction> BASE_ACTION_KEY_MAP = {
    {'b', BaseAction::BACK},
    {'q', BaseAction::QUIT}};

const std::map<char, State> STATE_ACTION_KEY_MAP = {
    {'1', State::IO_SELECTION},
    {'2', State::ACTION_SELECTION}};

const std::map<char, IOType> IO_KEY_MAP = {
    {'1', IOType::FILE},
    {'2', IOType::CONSOLE}};

const std::map<char, ActionType> ACTION_KEY_MAP = {
    {'1', ActionType::ENCODE},
    {'2', ActionType::DECODE}};

const std::map<BaseAction, std::string> BASE_ACTION_DISPLAY_MAP = {
    {BaseAction::BACK, "BACK"},
    {BaseAction::QUIT, "QUIT"}};

const std::map<State, std::string> STATE_DISPLAY_MAP = {
    {State::IO_SELECTION, "IO SELECTION"},
    {State::ACTION_SELECTION, "ACTION SELECTION"}};

const std::map<IOType, std::string> IO_DISPLAY_MAP = {
    {IOType::FILE, "FILE"},
    {IOType::CONSOLE, "CONSOLE"}};

const std::map<ActionType, std::string> ACTION_DISPLAY_MAP = {
    {ActionType::ENCODE, "ENCODE"},
    {ActionType::DECODE, "DECODE"}};

template <typename Enumeration>
auto as_integer(Enumeration const value) -> typename std::underlying_type<Enumeration>::type
{
    return static_cast<typename std::underlying_type<Enumeration>::type>(value);
}

#endif
