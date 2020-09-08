#include <stdio.h>

void main()
{
    // int i, sum = 0;
    // for (i = 1; i < 100; i++)
    // {
    //     sum += i;
    // }
    // printf("%d", sum);

    char c;
    for (; (c = getchar()) != '\n';)
    {
        printf("%c", c);
    }
}