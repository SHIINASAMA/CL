#include <stdio.h>

void main()
{
    int a, b;
    int *p1, *p2;
    a = 100;
    b = 200;
    *p1 = a;
    p2 = &b;
    printf("%d,%d\n", a, b);
    printf("%d,%d\n", *p1, *p2);
}