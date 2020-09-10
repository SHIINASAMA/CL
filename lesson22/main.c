#include <stdio.h>

void main()
{
    int a = 1;
    int b = 1;
    printf("%d\n%d\n", a, b);
    for (int i = 0; i < 40; i++)
    {
        int c = a + b;
        a = b;
        b = c;
        printf("%d\n", c);
    }
}