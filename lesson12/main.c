#include <stdio.h>

void main(){
    // int a = 3;
    // if(a == 3){
    //     printf("a equals 3!!\n");
    // }else{
    //     printf("a is %d",a);
    // }

    int score;
    printf("input your score:\n");
    scanf("%d",&score);
    if(score >= 90)printf("A");
    else if(score >= 80 && score < 90 )printf("B");
    else if(score >= 70 && score < 80 )printf("C");
    else if(score >= 60 && score < 70 )printf("D");
    else printf("E");
}