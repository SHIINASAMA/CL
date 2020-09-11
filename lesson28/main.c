#include <stdio.h>

void main()
{
    int a[8][8] = {{12, 23, 34, 56, 77, 90, 78, 45}, {12, 34, 55, 44, 77, 99, 55, 33}};
    int max = a[0][0];
    for (int i = 0; i < 8; i++)
    {
        for (int n = 0; n < 8; n++)
        {
            if (a[i][n] > max)
            {
                max = a[i][n];
            }
        }
    }
    printf("max = %d\n", max);
}