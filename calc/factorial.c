#include "factorial.h"

double factorial(double n)
{
    double result = 1;

    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }

    return result;
}
