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

std::string Coder::encode(const std::string &text)
{
    return Base64::encode(caesarsp_encode(text.c_str(), sizeof(text)));
}

std::string Coder::decode(const std::string &text)
{
    return caesarsp_decode(Base64::decode(text).c_str(), sizeof(text));
}