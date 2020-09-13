#include <stdio.h>

void move(char x, char y)
{
    printf("%c -> %c\n", x, y);
}

void hanoi(int n, char one, char two, char three)
{
    if (1 == n)
        move(one, three);
    else
    {
        hanoi(n - 1, one, three, two);
        move(one, three);
        hanoi(n - 1, two, one, three);
    }
}

void main()
{
    hanoi(3,'a','b','c');
}