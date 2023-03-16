#include "caesarsp.h"
#include <stdlib.h>

char *caesarsp_encode(const char *text, const size_t length)
{
    char *encodedText = malloc((length + 1) * sizeof(char));

    for (size_t i = 0; i < length; i++)
    {
        char character = text[i];
        if (character % 2)
        {
            encodedText[i] = character + 1;
        }
        else
        {
            encodedText[i] = character - 1;
        }
    }
    encodedText[length] = '\0';

    return encodedText;
}

char *caesarsp_decode(const char *text, const size_t length)
{
    char *decodedText = malloc((length + 1) * sizeof(char));

    for (size_t i = 0; i < length; i++)
    {
        char character = text[i];
        if (character % 2)
        {
            decodedText[i] = character + 1;
        }
        else
        {
            decodedText[i] = character - 1;
        }
    }
    decodedText[length] = '\0';

    return decodedText;
}
