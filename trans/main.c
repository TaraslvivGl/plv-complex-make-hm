#include "upper.h"
#include "low.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LIMIT 200
int main(int argc, char *argv[])
{
    // by default it is lowwer case converting
	const char upperCaseArg[] = "-u";
    bool upperCase = argc >= 2 && !strncmp(argv[1],  upperCaseArg, sizeof(upperCaseArg) - 1);

	const char * modeMsg = upperCase ? "upper" : "lowwer";
    printf("Message to be converte to %s case:\n", modeMsg);
    char str[MAX_LIMIT];
    memset(&str[0], '\0', MAX_LIMIT);

    fgets(str, MAX_LIMIT-1, stdin);

    const int convertedStrSize = strlen(str) + 1;
    char* upperStr = malloc(convertedStrSize);
    memset(upperStr, '\0', convertedStrSize);

    if (upperCase)
    {
        upper(str, upperStr, convertedStrSize-1);
    }
    else
    {
    	low(str, upperStr, convertedStrSize-1);
    }

    printf("%s\n", upperStr);
    free(upperStr);
    
    return 0;
}
