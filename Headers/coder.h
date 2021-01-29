#ifndef CODER_H
#define CODER_H

#include <string>

class Coder
{
public:
    static std::string encode(const std::string text);
    static std::string decode(const std::string text);
};

#endif