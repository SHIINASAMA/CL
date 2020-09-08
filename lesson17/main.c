#include <stdio.h>

void main()
{
    int a = 0, n;
    printf("input n:");
    scanf("%d", &n);
    while (n--)
    {
        printf("%d\n", a++ * 2);
    }
}