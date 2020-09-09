#include <stdio.h>

void main()
{
    // for (int n = 100; n <= 200; n++)
    // {
    //     if (n % 3 == 0)
    //     {
    //         continue;
    //     }
    //     printf("%d\n", n);
    // }

    double total = 0.0;
    for (int i = 1; i < 1000000000; i++)
    {
        double n = i * 2 - 1;
        if (i % 2 == 0)
        {
            total -= 1 / n;
        }
        else
        {
            total += 1 / n;
        }
    }
    total *= 4;
    printf("pi = %10.10f",total);
}