#include <stdio.h>

void main(){
    // int a,b;
    // printf("input a,b:");
    // scanf("%d%d",&a,&b);
    // if(a == b)printf("a = b\n");
    // else if(a > b)printf(" a > b\n");
    // else printf("a < b\n");

    // a = 1 ? printf("a = 1") : printf("a != 1");

    int a;
    printf("input integer number:");
    scanf("%d",&a);
    switch(a){
        case 1: printf("Monday\n");break;
        case 2: printf("Tuesday\n");break;
        case 3: printf("Wednesday\n");break;
        case 4: printf("Thursday\n");break;
        case 5: printf("Friday\n");break;
        case 6: printf("Saturday\n");break;
        case 7: printf("Sunday\n");break;
        default: printf("unkonwn date\n");break;
    }
}