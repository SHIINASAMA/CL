#include <stdio.h>

void main()
{
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = a;

    for (int i = 0; i < sizeof(a) / 4; i++)
        printf("%d\n",*(p+i));
}