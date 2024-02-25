#include "low.h"
#include <ctype.h>

void low(const char* str, char* strOut, int length)
{
    for (int i = 0; i < length; ++i)
    {
        strOut[i] = tolower(str[i]);
    }
}
