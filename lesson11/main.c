#include <stdio.h>

void main(){
    // int a,b,max;
    // printf("input two numbers:");
    // scanf("%d%d",&a,&b);
    // if(a > b){
    //     max = a;
    // }else{
    //     max = b;
    // }
    // printf("max = %d",max);

    char c;
    printf("input a character:");
    c = getchar();
    if(c<32){
        printf("This is a control character\n");
    }else if(c >= '0' && c <= '9'){
        printf("This is a digit.\n");
    }else if(c >= 'A' && c <= 'Z'){
        printf("This is a capital letter.\n");
    }else if(c >= 'a' && c <= 'z'){
        printf("This is a small letter.\n");
    }else{
        printf("This is a othor character.\n");
    }
    
}