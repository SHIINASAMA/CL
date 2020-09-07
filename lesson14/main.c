#include <stdio.h>

void main()
{
    // float a, b;
    // char c;
    // scanf("%f%c%f", &a, &c, &b);
    // switch (c)
    // {
    // case '+':
    //     printf("result: %f", a + c);
    //     break;
    // case '-':
    //     printf("result: %f", a - c);
    //     break;
    // case '*':
    //     printf("result: %f", a * c);
    //     break;
    // case '/':
    //     printf("result: %f", a / c);
    //     break;
    // default:
    //     printf("input error");
    // }

    int year;
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("是闰年");
    }
    else
    {
        printf("不是闰年");
    }
}