#ifndef CODER_HPP
#define CODER_HPP

#include <string>

/// This class contains encoding and decoding methods which include
/// combined base64 and modified Caesar's cypher algorithms
class Coder
{
public:
    static std::string Encode(const std::string &text);
    static std::string Decode(const std::string &text);
};

#endif