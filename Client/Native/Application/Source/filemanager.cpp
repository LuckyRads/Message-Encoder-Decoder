#include "filemanager.hpp"
#include "symbolfactory.hpp"

#include <fstream>
#include <string>
#include <vector>

FileManager::FileManager(const std::string filename, const std::string symbolClassname)
{
    this->filename = filename;
    this->symbolClassname = symbolClassname;
}

FileManager::~FileManager()
{
}

void FileManager::Write(const std::string &action, const std::string &text)
{
    std::ofstream file;
    IOSymbol *pSymbol = SymbolFactory::CreateSymbol(symbolClassname, {action});

    file.open(this->filename, std::ios::app);

    file << pSymbol->GetStartSymbol() << std::endl;
    file << text << std::endl;
    file << pSymbol->GetEndSymbol() << std::endl;

    file.close();
    delete pSymbol;
}

std::string FileManager::Read(const std::string &action)
{
    std::ifstream file;
    file.open(this->filename);
    std::vector<std::string> parsedInput;
    IOSymbol *pSymbol = SymbolFactory::CreateSymbol(symbolClassname, {"input"});

    std::string line;
    bool isReading = false;
    while (std::getline(file, line))
    {
        if (line == pSymbol->GetStartSymbol())
        {
            while (std::getline(file, line))
            {
                if (line == pSymbol->GetEndSymbol())
                {
                    isReading = false;
                    break;
                }
                parsedInput.push_back(line);
            }
        }
    }
    delete pSymbol;
    file.close();

    std::string result;
    for (auto &line : parsedInput)
    {
        result += line + "\n";
    }
    return result;
}