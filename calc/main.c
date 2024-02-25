#include <stdio.h>
#include "sum.h"
#include "difference.h"
#include "product.h"
#include "fraction.h"
#include "square_root.h"
#include "factorial.h"


void proceedOneNumberOperation(int operation)
{
    double number;
    printf("Number: ");
    scanf("%lf", &number);
    switch(operation)
    {
    case 5:
        printf("%g! = %g\n", number, factorial(number));
        break;
    case 6:
        printf("sqrt(%g) = %g\n", number, squareRooot(number));
        break;
    default:;
    }
}

void proceedTwoNumberOperation(int operation)
{
    double first, second;
    printf("Number1: ");
    scanf("%lf", &first);
    printf("Number2: ");
    scanf("%lf", &second);
    switch(operation)
    {
    case 1:
        printf("%g + %g = %g\n", first, second, sum(first, second));
        break;
    case 2:
        printf("%g - %g = %g\n", first, second, difference(first, second));
        break;
    case 3:
        printf("%g * %g = %g\n", first, second, product(first, second));
        break;
    case 4:
        printf("%g / %g = %g\n", first, second, fraction(first, second));
        break;
    default:;
    }
}

int main()
{
    printf("Chose operation:\n");
    printf("1. Sum\n");
    printf("2. Difference\n");
    printf("3. Product\n");
    printf("4. Fraction\n");

    printf("5. Factorial\n");
    printf("6. Square root\n");

    int operationInput;
    printf("Operation: ");
    scanf("%d", &operationInput);

    if (operationInput > 0 && operationInput < 5)
    {
        proceedTwoNumberOperation(operationInput);
    }
    else if (operationInput >= 5 && operationInput <= 6)
    {
        proceedOneNumberOperation(operationInput);
    }
    else
    {
        printf("Unsupported operation %d\n", operationInput);
    }
    return 0;
}
