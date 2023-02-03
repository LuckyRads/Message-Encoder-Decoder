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

const std::map<int, std::string> STATE_MAP = {
    {1, "IO_SELECTION"},
    {2, "ACTION_SELECTION"}};

const std::map<int, std::string> IO_MAP = {
    {1, "FILE"},
    {2, "CONSOLE"}};

const std::map<int, std::string> ACTION_MAP = {
    {1, "ENCODE"},
    {2, "DECODE"}};

template <typename Enumeration>
auto as_integer(Enumeration const value) -> typename std::underlying_type<Enumeration>::type
{
    return static_cast<typename std::underlying_type<Enumeration>::type>(value);
}

#endif
