#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//function prototype
void define_UserNum(int _iUserNum[] , size_t _LENGTH);
void define_LottoNum(int _iLottoNum[], size_t _LENGTH);
void print_Number(int _iLottoNum[], size_t _LENGTH);
void sort(int _lottoNumber[], int _lottoSize);
int find_WinCount(int _iUserNum[], int _iLottoNum[], size_t _LENGTH);
void find_WinNum(int _iUserNum[], int _iLottoNum[], int _iWinNum[] , size_t _iWinCount);

int main(void){
    size_t LENGTH = 6;//define the user and lotoo array length by 6
    int iUserNum[LENGTH];
    int iLottoNum[LENGTH];
    //take user input to define user's chosen number
    define_UserNum(iUserNum, LENGTH);
    //print the user's chosen number
    printf("%s","Your chosen number: ");
    print_Number(iUserNum, LENGTH);
    puts("");
    //make a random lotto number
    define_LottoNum(iLottoNum, LENGTH);
    sort(iLottoNum, LENGTH);
    //print the lotto number
    printf("%s","Lotto number: ");
    print_Number(iLottoNum, LENGTH);
    puts("");
    //result
    int iWinCount = find_WinCount(iUserNum, iLottoNum, LENGTH);
    if(iWinCount != 0){
        printf("Congratulation! You won %d number.", iWinCount);
        puts("");
        //define the iWinNum
        int iWinNum[iWinCount];
        find_WinNum(iUserNum, iLottoNum, iWinNum, LENGTH);
        sort(iWinNum, iWinCount);
        printf("%s", "Your winning number:");
        print_Number(iWinNum, iWinCount);
    }//end if
    else{
        printf("%s", "Sorry, it is not you day for playing lotto : (");
    }//end else
    return 0;
}//end main

void define_UserNum(int _iUserNum[] , size_t _LENGTH){
    for(int i = 0 ; i < _LENGTH ; ++i){//take user input for the value in the array
        printf("Enter your number %d: ",i+1);
        scanf("%d",&_iUserNum[i]);
        if(_iUserNum[i] < 1 || _iUserNum[i] > 49){//check user input whether is valid
            puts("The number you choose must be within range(1~49)");
            i--;
        }//end while
        for(int k = 0 ; k < i ; ++k){//check user input whether is used
            if(_iUserNum[i] == _iUserNum[k]){
                printf("You have already chosen %d. Please choose a different number.\n" , _iUserNum[i]);
                i--;
            }//end if
        }//end for
    }//end for
}//end DefineUserArray

void define_LottoNum(int _iLottoNum[], size_t _LENGTH){
    int i = 0;
    srand(time(NULL));
    while(i < _LENGTH){
        _iLottoNum[i] = (rand()%49)+1;
        for(int k = 0 ; k < i ; ++k){//ensure the lotto number must be different from other lotto number
            if(_iLottoNum[i] == _iLottoNum[k]){
                i--;
            }//end if
        }//end for
        i++;
    }//end while
}//end DefineLottoArray

void print_Number(int _iArray[], size_t _LENGTH){
    for(int i = 0 ; i < _LENGTH ; ++i){
        printf("%d", _iArray[i]);
        if(i != _LENGTH-1){
            printf("%s", ",");
        }//end if
    }//end for
}//end PrintArray

void sort(int _lottoNumber[], int _lottoSize){
    int iHold;
    for(int k = 0 ; k < _lottoSize - 1 ; ++k){
        for(int i = 0 ; i < _lottoSize - 1 ; ++i){
            if(_lottoNumber[i] > _lottoNumber[i+1]){
                iHold = _lottoNumber[i];
                _lottoNumber[i] = _lottoNumber[i+1];
                _lottoNumber[i+1] = iHold;
            }//end if
        }//end for
    }//end for        
}//end sort

int find_WinCount(int _iUserNum[], int _iLottoNum[], size_t _LENGTH){
    int _iWinCount = 0;//initialize
    int k = 0;
    for(int i = 0; i < _LENGTH; ++i){
        k = 0;
        while(k < 6){
            if(_iUserNum[i] == _iLottoNum[k]){
                _iWinCount++;
            }//end if
            k++;
        }//end while
    }//end for
    return _iWinCount;
}//end checkWinNumber

void find_WinNum(int _iUserNum[], int _iLottoNum[], int _iWinNum[] , size_t _iWinCount){
    int k = 0;
    int j = 0;//WinNum counter
    for(int i = 0 ; i < _iWinCount ; ++i){
        k = 0;
        while(k < 6){
            if(_iUserNum[i] == _iLottoNum[k]){
                _iWinNum[j] = _iUserNum[i];
                j++;
            }//end if
            k++;
        }//end while
    }//end for  
}//end findWinArray
