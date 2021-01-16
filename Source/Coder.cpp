#include "Coder.h"
#include <iostream>

std::string Coder::encode(const std::string text)
{
    std::string encodedText;

    for (char character : text)
    {
        encodedText.push_back(character + 1);
    }

    return encodedText;
}

std::string Coder::decode(const std::string text)
{
    std::string decodedText;

    for (char character : text)
    {
        decodedText.push_back(character - 1);
    }    

    return decodedText;
}
