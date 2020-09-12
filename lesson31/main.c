#include <stdio.h>

void printstar()
{
    printf("********************************\n");
}

void printmessage()
{
    printf("Hello Function\n");
}

int max(int x, int y)
{
    return x > y ? x : y;
}

void main()
{
    printstar();
    printmessage();
    printstar();
    int a = 100, b = 200;
    int c = max(a, b);
    printf("%d\n",c);
}