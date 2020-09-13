#include <stdio.h>

int power(int x, int y);

void main()
{
    printf("%d\n", power(2, 2));
}

int power(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    int z = x;
    for (int i = 0; i < y - 1; i++)
    {
        z *= x;
    }
    return z;
}