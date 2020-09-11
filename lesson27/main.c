#include <stdio.h>

void main()
{
    int a[5][3] = {{100, 20, 30}, {34, 56, 78}, {90, 34, 55}, {78, 68, 76}, {40, 56, 34}};
    printf("姓名\tA\tB\tC\tD\tE\n");
    printf("数学\t");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",a[i][0]);
    }
    printf("\n语文\t");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",a[i][1]);
    }
    printf("\n外语\t");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",a[i][2]);
    }
}