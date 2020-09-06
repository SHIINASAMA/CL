#include <stdio.h>

void main(){
    int a,b;
    scanf("%d,%d",&a,&b);
    printf("a = %d, b = %d\n",a,b);

    int c;
    // 限制输入宽度
    scanf("%5d",&c);
    printf("c = %d",c);
}
