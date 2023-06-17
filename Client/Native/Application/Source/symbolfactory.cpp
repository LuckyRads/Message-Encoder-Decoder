#include "symbolfactory.hpp"
#include "xmlsymbol.hpp"
#include <string>
#include <vector>

XMLSymbol *CreateXMLSymbol(std::vector<std::string> args)
{
    if (args.size() < 1)
    {
        return nullptr;
    }

    return new XMLSymbol(args[0]);
}

IOSymbol *SymbolFactory::CreateSymbol(const std::string classname, std::vector<std::string> args)
{
    if (classname == "XMLSymbol")
    {
        return CreateXMLSymbol(args);
    }
    return nullptr;
}