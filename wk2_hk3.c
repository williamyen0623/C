#include <stdio.h>
int main(void){
    /*
    This program is to enter a number of size of
    edge of a square, then print the square.
    */
    int input;
    printf("%s","input>");
    scanf("%d",&input);
    while(input<1){
        puts("the size of edge of the square should >= 0");
        printf("%s","input>");
        scanf("%d",&input);
    }
    int k,space;
    for(int i=1;i<=input;i++){
        space=input-i;
        while(space!=0){
            printf("%s"," ");
            space--;
        }
        k=i*2-1;
        while(k!=0){
            printf("%s","*");
            k--;
        }
        puts("");
    }
    for(int i=input-1;i>0;i--){
        space=input-i;
        while(space!=0){
            printf("%s"," ");
            space--;
        }
        k=i*2-1;
        while(k!=0){
            printf("%s","*");
            k--;
        }
        puts("");
    }
    return 0;
}