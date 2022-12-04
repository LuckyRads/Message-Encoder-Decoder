#include "caesarsp.h"
#include <stdlib.h>

char *caesarsp_encode(const char *text, const size_t size)
{
    char *encodedText = malloc(size);

    for (size_t i = 0; i < size; i++)
    {
        char character = text[i];
        if (text[i] % 2)
        {
            encodedText[i] = character + 1;
        }
        else
        {
            encodedText[i] = character - 1;
        }
    }

    return encodedText;
}

char *caesarsp_decode(const char *text, const size_t size)
{
    char *decodedText = malloc(size);

    for (size_t i = 0; i < size; i++)
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

    return decodedText;
}
