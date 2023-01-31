#ifndef IOMANAGER_HPP
#define IOMANAGER_HPP

#include "types.hpp"
#include <string>

class IOManager
{
public:
    virtual void Write(const std::string &action, const std::string &text) = 0;
    virtual std::string Read(const std::string &action) = 0;
};

#endif
