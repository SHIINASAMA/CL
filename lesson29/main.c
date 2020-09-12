#include <stdio.h>

void main()
{
    int target = 110;
    int index;
    int a[] = {-12, 0, 6, 16, 23, 56, 80, 100, 110, 115};
    int size = sizeof(a) / 4;
    int low = 0, high = size - 1, mid = size / 2;

    for (int i = 0; i < mid; i++)
    {
        if (a[mid] == target)
        {
            index = mid;
            goto breakPoint;
        }
        else if (a[mid] > a[low])
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
        mid = (low + high) / 2;
    }
    printf("error");
    return;
breakPoint:
    printf("index = %d",index);
}