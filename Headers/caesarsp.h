#ifndef CAESARSP_H
#define CAESARSP_H

#include <string>

/// Modified Caesar's cypher class for encoding and decoding text
class CaesarsP
{
public:
    static std::string encode(const std::string &text);
    static std::string decode(const std::string &text);
};

#endif