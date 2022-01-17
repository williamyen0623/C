#include <stdio.h>

int main(void){
    int salaryCode=0;
    float weeklysalary,workTimeInHour,salaryPerHour;
    while(salaryCode!=-1){
        printf("%s","please input a salaryCode(1~4),-1 for ending: ");
        scanf("%d",&salaryCode);
        switch(salaryCode){
            case 1:{
                printf("%s","please input the manager's weekly weeklysalary: ");
                scanf("%f",&weeklysalary);
                printf("the manager's weekly weeklysalary is %.2f",weeklysalary);
                puts("");
                break;
            }
            case 2:{
                printf("%s","please input the number of the worker's time in hours per week: ");
                scanf("%f",&workTimeInHour);
                printf("%s","please input the salary per hour: ");
                scanf("%f",&salaryPerHour);
                if(workTimeInHour>40){
                    printf("the hour worker's salary per week is: %.2f",(workTimeInHour-40)*1.5+workTimeInHour*salaryPerHour);
                }
                else{
                    printf("the hour worker's salary per week is: %.2f",workTimeInHour*salaryPerHour);
                }
                puts("");

                break;
            }
            case -1:{
                puts("end program");
                return 0;
            }
            default:{
                puts("please enter a valid salaryCode(1~4),-1 for ending");
            }
        }
    }
}