#include <stdio.h>

int main(void){
    int input;
    int count = 0;
    /*if want to change the range we can change the min and max*/
    int min = 1;
    int max = 1000;
    puts("You need to input a number from 1 to 1000,please determine the input is a prime!");
    /*input*/
    printf("%s","input>");
    scanf("%d",&input);
    if(input < min || input > max){ 
        printf("%s","It is not a valid input!");
    }
    if(input >= min && input <= max){ 
        /*
        count from 1 to the input,and inspect whether the remainder is 0
        if it is 0,then the count(factor) + 1
        */
        for(int i = 1 ; i <= input ; i++){
            if( (input % i) == 0){
                count++;
            }//end for
        }//end if
        /*
        if the number of the factors of the input is only 2
        then the input is a prime number 
        */
        if(count == 2){
            printf("%d is a prime number!" , input);
        }//end if
        else{
            printf("Oops! %d is not a prime number!" , input);
        }//end else
    }// end if
    
}//end main