#include <stdio.h>

void main()
{
    int a[5][3] = {{100, 20, 30}, {34, 56, 78}, {90, 34, 55}, {78, 68, 76}, {40, 56, 34}};
    printf("����\tA\tB\tC\tD\tE\n");
    printf("��ѧ\t");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",a[i][0]);
    }
    printf("\n����\t");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",a[i][1]);
    }
    printf("\n����\t");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",a[i][2]);
    }
}