#include "upper.h"
#include "ctype.h"

void upper(const char* str, char* strOut, int length)
{
    for (int i = 0; i < length; ++i)
    {
        strOut[i] = toupper(str[i]);
    }
}

