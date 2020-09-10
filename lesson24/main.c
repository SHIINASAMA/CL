#include <stdio.h>

void main()
{
    int max = 0, a[10];
    printf("input 10 numbers:");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("max = %d\n", max);
}