#include <stdio.h>

void main()
{
    int a[3][3][3] = {{1, 0, 2}, {4}, {7, 8}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("a[%d][%d][%d] = %d\n",k,j,i,a[k][j][i]);
            }
        }
    }
}