#ifndef TYPES_HPP
#define TYPES_HPP

#include <map>
#include <string>

enum class State
{
    IO_SELECTION = 1,
    ACTION_SELECTION = 2
};

enum class IOType
{
    FILE = 1,
    CONSOLE = 2
};

const std::map<unsigned int, std::string> STATE_MAP = {
    {1, "IO_SELECTION"},
    {2, "ACTION_SELECTION"}};

const std::map<unsigned int, std::string> IO_MAP = {
    {1, "FILE"},
    {2, "CONSOLE"}};

#endif
