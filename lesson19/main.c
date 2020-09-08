#include <stdio.h>

void main()
{
    for (int i = 1; i < 7; i++)
    {
        for (int n = 0; n < i; n++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 7; i > 1; i--)
    {
        for (int n = i - 1; n > 0; n--)
        {
            printf("*");
        }
        printf("\n");
    }
}