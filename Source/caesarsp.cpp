#include "caesarsp.h"
#include <iostream>

std::string Coder::encode(const std::string text)
{
    std::string encodedText;

    for (unsigned char character : text)
    {
        if (character % 2)
        {
            encodedText.push_back(character + 1);
        }
        else
        {
            encodedText.push_back(character - 1);
        }
    }

    return encodedText;
}

std::string Coder::decode(const std::string text)
{
    std::string decodedText;

    for (unsigned char character : text)
    {
        if (character % 2)
        {
            decodedText.push_back(character + 1);
        }
        else
        {
            decodedText.push_back(character - 1);
        }
    }    

    return decodedText;
}
