#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void moveleft(char _str[],int _lenSize);
int findShortestLength(char str[]);

int main(void){
    int output[10]={0};
    int i=0;
    puts("---input---");
    for(i=0;i<10;i++){
        char str[101];
        fgets(str,101,stdin);
        if(str[0]=='0'){
            break;
        }
        if(str[strlen(str)-1]=='\n')str[strlen(str)-1]='\0';
        output[i]=findShortestLength(str);
    }
    puts("---output---");
    for(int k=0;k<i;k++){
        printf("%d\n",output[k]);
    }
    return 0;
}

int findShortestLength(char str[]){
        int lenSize=strlen(str);
        char cpyforcmp[lenSize],cpyforget[lenSize],compare[lenSize];
        strcpy(cpyforcmp,str);

        for(int i=1;i<=lenSize;i++){
            strcpy(cpyforget,str);
            for(int k=1;k<=lenSize-i+1;k++){
                int count=0;
                strcpy(cpyforcmp,str);
                strncpy(compare,cpyforget,i);
                for(int j=1;j<=lenSize-i+1;j++){
                    int yes=strncmp(compare, cpyforcmp, i);
                    if(yes==0)count++;
                    /*cpyforcmp move left*/
                    moveleft(cpyforcmp,lenSize);
                }//end for
                if(count==1){
                    return i;
                }//end if
                moveleft(cpyforget,lenSize);
            }//end for
        }//end for
}//end main

void moveleft(char _str[],int _lenSize){
    char hold=_str[0];
    for(int i=0;i<_lenSize-1;i++){
        _str[i]=_str[i+1];
    }
    _str[_lenSize-1]=hold;
}