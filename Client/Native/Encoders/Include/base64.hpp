#ifndef BASE64_HPP
#define BASE64_HPP

#include <string>

/// Class for text encryption and decryption using base64 algorithm
class Base64
{
public:
	static std::string encode(const std::string &text);
	static std::string decode(const std::string &text);
};

#endif