#include <stdio.h>
int main(void){
    int year,month,day,check;

    printf("%s","Please input year,month,day\nyear>");
    //input year
    scanf("%d",&year);
    if(year%4!=0){
        check=0;
    }
    else if(year%100!=0){
        check=1;
    }
    else if(year%400!=0){
        check=0;
    }
    else{
        check=1;
    }

    /*
    check input month whether is valid
    */
    printf("%s","month>");
    scanf("%d",&month);
    while(month<1||month>12){
        printf("%s","Please input a valid month(1~12)\nmonth>");
        scanf("%d",&month);
    }//end while

    /*
    check input day whether is valid
    */
    printf("%s","day>");
    for(int i=1;i<2;i++){
        scanf("%d",&day);
        if(day<1){
            printf("%s","Please input a valid day\nday>");
            i--;
        }//end if
        else{
            if(month<=7){
                if(month%2==0){
                    if(month==2){
                        if(check==1){
                            if(day>29){
                                printf("%s","Please input a valid day\nday>");
                                i--;
                            }//end if
                        }//end if
                        else if(day>28){
                            printf("%s","Please input a valid day\nday>");
                            i--;   
                        }//end else if
                    }//end if
                    else if(day>30){
                        printf("%s","Please input a valid day\nday>");
                        i--;
                    }//end else if
                }//end if
                else if(day>31){
                    printf("%s","Please input a valid day\nday>");
                    i--;
                }//end else if
            }//end if
            else{
                if(month%2==0){
                    if(day>31){
                        printf("%s","Please input a valid day\nday>");
                        i--;
                    }//end if
                }//end if
                else if(day>30){
                    printf("%s","Please input a valid day\nday>");
                    i--;
                }//end else if
            }//end else
        }//end else
    }//end for

    /*
    calculate the dayth
    */
    int dayth=0;
    for(int k=1;k<month;k++){
        if(k<=7){
            if(k%2==0){
                if(k==2){
                    dayth=dayth+28;
                }//end if
                else{
                    dayth=dayth+30;
                }//end else
            }//end if
            else{
                dayth=dayth+31;
            }//end else
        }//end if
        else{
            if(k%2==0){
                dayth=dayth+31;
            }//end if
            else{
                dayth=dayth+30;
            }//end else
        }//end else
    }//end for

    /*
    print the dayth
    */
    if(check==0){
        printf("It is the %dth day",dayth+day);
    }//end if
    else{
        if(month==2){
            printf("It is the %dth day",dayth+day);
        }//end if
        else{
            printf("It is the %dth day",dayth+day+1);
        }//end else
    }//end else
    
    return 0;
}//end main