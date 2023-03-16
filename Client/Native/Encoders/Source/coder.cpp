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
    char *pCaesarsEncoded = caesarsp_encode(text.c_str(), text.size());
    // const std::string encoded = Base64::Encode(pCaesarsEncoded);
    // free(pCaesarsEncoded);
    std::string encoded(pCaesarsEncoded);
    return encoded;
}

std::string Coder::Decode(const std::string &text)
{
    // std::string base64Decoded = Base64::Decode(text);
    // std::string decoded = caesarsp_decode(base64Decoded.c_str(), (text.size() + 1) * sizeof(char));
    std::string decoded = caesarsp_decode(text.c_str(), text.size());
    return decoded;
}
