#include <stdio.h>
#include "my_math.h"

int main()
{
    int s = 0;
    s = factorial(square(2)) + factorial(square(3));
    printf("%d\n", s);
}