#ifndef IOSYMBOL_HPP
#define IOSYMBOL_HPP

#include <string>

class IOSymbol
{
public:
    virtual std::string GetStartSymbol() = 0;
    virtual std::string GetEndSymbol() = 0;
};

#endif