#include <stdio.h>
#include <string.h>
int main(void){
    /*
    This program is to input a number in [-99999,99999]
    and detect how many '7' in it.
    */
    int input;
    printf("%s","input>");
    scanf("%d",&input);
    while(input<-99999 || input>99999){
        printf("%s","input>");
        puts("input should be in [-99999,99999]");
        scanf("%d",&input);
    }
    printf("the number '%d'has ",input);
    int count=0;
    for(input;input!=0;input=input/10){
        if(input%10==7||input%10==-7)count++;
    }
    printf("%d '7'",count);

    return 0;

    /*
    char input[6],count=0;
    printf("%s","input>");
    fgets(input,6,stdin);
    if (strlen(input)-1=='\n')input[strlen(input)-1]='0';
    for(int i=0;i<6;i++){
        if(input[i]=='7')count++;
    }
    printf("'%s' have %d '7'.",input,count);
    */
}
