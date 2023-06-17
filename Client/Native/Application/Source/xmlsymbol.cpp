#include "xmlsymbol.hpp"

XMLSymbol::XMLSymbol(const std::string &action)
{
    this->action = action;
}

XMLSymbol::~XMLSymbol()
{
}

std::string XMLSymbol::GetStartSymbol()
{
    return "<" + action + ">";
}

std::string XMLSymbol::GetEndSymbol()
{
    return "</" + action + ">";
}