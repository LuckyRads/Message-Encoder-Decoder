#include "coder.hpp"
#include "base64.hpp"

#ifdef __cplusplus
extern "C"
{
#endif
#include "caesarsp.h"
#ifdef __cplusplus
}
#endif

std::string Coder::Encode(const std::string &text)
{
    return Base64::Encode(caesarsp_encode(text.c_str(), sizeof(text)));
}

std::string Coder::Decode(const std::string &text)
{
    return caesarsp_decode(Base64::Decode(text).c_str(), sizeof(text));
}