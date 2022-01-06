#include <stdio.h>
int main(void){
    float input;
    while(1){
        printf("%s","Enter sales in dollars (-1 to end): ");
        scanf("%f",&input);
        if(input==-1)return 0;
        printf("Salary is : $%.2f",input*9/100+200);
        puts("");
    }
}