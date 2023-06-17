#ifndef FILEMANAGER_HPP
#define FILEMANAGER_HPP

#include "iomanager.hpp"
#include "iosymbol.hpp"
#include <string>

class FileManager : public IOManager
{
private:
    std::string filename;
    std::string symbolClassname;

public:
    FileManager(const std::string filename, const std::string symbolClassname);
    ~FileManager();
    void Write(const std::string &action, const std::string &text) override;
    std::string Read(const std::string &action) override;
};

#endif