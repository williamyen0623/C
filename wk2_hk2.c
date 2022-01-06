#include <stdio.h>
int main(void){
    /*
    This program is to check a input integer 
    whether is a prime number
    */
    int input,factor=0;
    printf("%s","input>");
    scanf("%d",&input);
    while(input < 1){
        puts("input must be >= 1");
        printf("%s","input>");
        scanf("%d",&input);
    }    
    for(int i=1;i<=input/2;i++){
        if(input%i == 0)factor++;
    }
    if(factor == 1){
        printf("%s","yes");
    }
    else{
        printf("%s","no");
    }
    
    return 0;
}