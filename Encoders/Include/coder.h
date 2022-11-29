#ifndef CODER_H
#define CODER_H

#include <string>

/// This class contains encoding and decoding methods which include
/// combined base64 and modified Caesar's cypher algorithms
class Coder
{
public:
    static std::string encode(const std::string &text);
    static std::string decode(const std::string &text);
};

#endif