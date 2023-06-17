#ifndef XMLSYMBOL_HPP
#define XMLSYMBOL_HPP

#include "iosymbol.hpp"
#include <string>

class XMLSymbol : public IOSymbol
{
private:
    std::string action;

public:
    XMLSymbol(const std::string &action);
    ~XMLSymbol();
    std::string GetStartSymbol() override;
    std::string GetEndSymbol() override;
};

#endif