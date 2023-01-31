#ifndef CONSOLEMANAGER_HPP
#define CONSOLEMANAGER_HPP

#include "iomanager.hpp"
#include <string>

class ConsoleManager : public IOManager
{
public:
    ConsoleManager();
    ~ConsoleManager();
    void Write(const std::string &action, const std::string &text) override;
    std::string Read(const std::string &action) override;
};

#endif
