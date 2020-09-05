#include <stdio.h>

int main(){
    int a,b,c,d;
    unsigned u;
    a=12;
    b=-24;
    u=10;
    c=a+u;
    d=b+u;
    printf("a + u = %d, b + u = %d\n",c,d);

    // 溢出
    short e = 32767;
    short n = e + 1;
    printf("%d, %d",e,n);
}