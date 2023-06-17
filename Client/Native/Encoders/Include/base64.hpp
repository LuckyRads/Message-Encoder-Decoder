#ifndef BASE64_HPP
#define BASE64_HPP

#include <string>

/// Class for text encryption and decryption using base64 algorithm
class Base64
{
public:
	static std::string Encode(const std::string &text);
	static std::string Decode(const std::string &text);
};

#endif