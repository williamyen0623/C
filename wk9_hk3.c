#include <stdio.h>
int main(void){
    int row,cell;
    scanf("%d",&cell);
    if(cell<=702){
        row=1;
    }
    else{
        row=cell/702+1;
    }
    printf("%d-",row);
    int column=cell%702;
    if(column==0){
        printf("%s","ZZ");
    }
    else if(column<=26){
        printf("%c",column+64);
    }
    else{
        printf("%c",column/26+64);
        printf("%c",column%26+64);
    }
    return 0;
}
