#include <stdio.h>
int find_MaxCycleLength(int _input1,int _input2);
int main(void){
    int input1,input2;
    scanf("%d %d",&input1,&input2);
    printf("%d",find_MaxCycleLength(input1,input2));

}//end main

int find_MaxCycleLength(int _input1,int _input2){
    int count=1;
    
    if(_input1>_input2){
        int hold=_input2;
        _input2=_input1;
        _input1=hold;
    }//end if
    int array[_input2-_input1+1];
    if(_input1==_input2){
        int k=_input1;
        count=1;
        while(k!=1){
            if(k%2!=0){
                k=3*k+1;
            }
            else{
                k=k/2;
            }
                count++;
        }
        return count;
    }
    if(_input1!=_input2){
        for(int i=_input1;i<=_input2;i++){
            int k=i;
            count=1;
            while(k!=1){
                if(k%2!=0){
                    k=3*k+1;
                }
                else{
                    k=k/2;
                }
                count++;
            }
            array[i-_input1]=count;
        }
        int MaxCycleLength=0;
        for(int j=0;j<=_input2-_input1;j++){
            if(array[j]>MaxCycleLength)MaxCycleLength=array[j];    
        }
        return MaxCycleLength;
    }
}
