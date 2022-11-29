#include "coder.h"
#include "base64.h"
#include "caesarsp.h"

std::string Coder::encode(const std::string &text)
{
    return Base64::encode(CaesarsP::encode(text));
}

std::string Coder::decode(const std::string &text)
{
    return CaesarsP::decode(Base64::decode(text));
}