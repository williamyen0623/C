#include <stdio.h>
#include <string.h>
int findLongestLength(char str[]);

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
        output[i]=findLongestLength(str);
    }//end for
    puts("---output---");
    for(int k=0;k<i;k++){
        printf("%d\n",output[k]);
    }//end for
    return 0;
}//end main

int findLongestLength(char str[]){
    int lenSize=strlen(str);
    int count,count1=0,countOdd=0;
    for(int i=0;i<lenSize;i++){
        count=1;
        if(str[i]=='0')continue;
        for(int k=i+1;k<lenSize;k++){
            if(str[i]==str[k]){
                count++;
                str[k]='0';
            }//end if
        }//end for
        if(count==1){
            count1++;
        }//end if
        else if(count%2==1){
            countOdd++;
        }//end else if
    }
    if(count1>0&&countOdd>0){
        if(countOdd>1){
            return lenSize-count1-countOdd+1;
        }//end if
        else{
            return lenSize-count1;
        }//end else
    }
    else if(count1>0){
        return lenSize-count1+1;
    }//end else if
    else if(countOdd>0){
        return lenSize-countOdd+1;
    }//end else if
    else{
        return lenSize;
    }//end else
}//end findLongestLength