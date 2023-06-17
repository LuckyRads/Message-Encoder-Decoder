#ifndef SYMBOLFACTORY_HPP
#define SYMBOLFACTORY_HPP

#include "iosymbol.hpp"
#include <string>
#include <vector>

class SymbolFactory
{
public:
    static IOSymbol *CreateSymbol(const std::string classname, std::vector<std::string> args);
};

#endif