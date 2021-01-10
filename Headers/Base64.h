#pragma once
#include <string>

class Base64
{
public:
	static std::string encode(const std::string& in);
	static std::string decode(const std::string& in);
};
