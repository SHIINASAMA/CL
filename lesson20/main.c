#include <stdio.h>

void main()
{
    // for (int a = 1; a < 5; a++)
    // {
    //     for (int b = 1; b < 5; b++)
    //     {
    //         for (int c = 1; c < 5; c++)
    //         {
    //             if (a != b && a != c && b != c)
    //             {
    //                 printf("%d%d%d\n", a, b, c);
    //             }
    //         }
    //     }
    // }

    int i = 0;
    while (1)
    {
        i++;
        if (i == 9)
        {
            break;
        }
        if (i == 8)
        {
            continue;
        }
        printf("Hello\n");
    }
}