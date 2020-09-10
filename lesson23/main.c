#include <stdio.h>

void main()
{
    int a[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",a[i]);
    }
    printf("%x\n",a);
    printf("%d",sizeof(a)/4);
}