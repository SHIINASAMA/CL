#include <stdio.h>

void main()
{
    int a[] = {12, 32, 45, 65, 67, 88, 90, 23, 1, 34, 39, 29, 22, 44, 79, 80, 41, 29, 55, 76, 18, 95};
    int size = sizeof(a) / 4;
    for (int i = 0; i < size; i++)
    {
        for (int n = 0; n < size; n++)
        {
            if (i == n)
            {
                continue;
            }

            if (a[i] > a[n])
            {
                int temp = a[i];
                a[i] = a[n];
                a[n] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d \n", a[i]);
    }
}