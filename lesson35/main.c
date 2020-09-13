#include <stdio.h>

int factorial(int x);

void main()
{
    printf("%d\n", factorial(4));
}

int factorial(int x)
{
    int result = 1;
    if (x <= 1)
        return result;
    result = factorial(x - 1) * x;
    return result;
}