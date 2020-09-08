#include <stdio.h>

void main()
{
    float d;
    int w, s, p;
    scanf("%d %d %d", &w, &s, &p);
    if (s < 250)
        d = 1.0;
    else if (s >= 250 && s < 500)
        d = 0.98;
    else if (s >= 500 && s < 1000)
        d = 0.95;
    else if (s >= 1000 && s < 2000)
        d = 0.92;
    else if (s >= 2000 && s < 3000)
        d = 0.90;
    else if (s >= 3000)
        d = 0.85;

    float f = p * w * d * s;
    printf("%f", f);
}