#ifndef CAESARSP_H
#define CAESARSP_H

#include <stdlib.h>

// Modified Caesar's cypher functions for encoding and decoding text
char *caesarsp_encode(const char *text, const size_t size);
char *caesarsp_decode(const char *text, const size_t size);

#endif