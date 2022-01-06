#include <stdio.h>
int main(void){
    int num,count=0;
    printf("%s","num = ");
    scanf("%d",&num);
    while(num!=0){
        if(num%2!=0){
            num--;
        }
        else{
            num=num/2;
        }
        count++;
    }
    printf("%d",count);

    return 0;
}