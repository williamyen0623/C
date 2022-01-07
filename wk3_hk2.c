#include <stdio.h>
int main(void){
    int product,sellNum;
    float table[5][4]={{1,2.98},{2,4.50},{3,9.98},{4,4.49},{5,6.87}};
    while(product != 0){
        printf("%s","product>");
        scanf("%d",&product);
        switch(product){
            case 1:{
                printf("%s","sellNum>");
                scanf("%d",&sellNum);
                table[0][2]=table[0][2]+sellNum;
                table[0][3]=table[0][3]+sellNum*table[0][1];
                break;
            }
            case 2:{
                printf("%s","sellNum>");
                scanf("%d",&sellNum);
                table[1][2]=table[1][2]+sellNum;
                table[1][3]=table[1][3]+sellNum*table[1][1];
                break;
            }
            case 3:{
                printf("%s","sellNum>");
                scanf("%d",&sellNum);
                table[2][2]=table[2][2]+sellNum;
                table[2][3]=table[2][3]+sellNum*table[2][1];
                break;
            }
            case 4:{
                printf("%s","sellNum>");
                scanf("%d",&sellNum);
                table[3][2]=table[3][2]+sellNum;
                table[3][3]=table[3][3]+sellNum*table[3][1];
                break;
            }
            case 5:{
                printf("%s", "sellNum>");
                scanf("%d",&sellNum);
                table[4][2]=table[4][2]+sellNum;
                table[4][3]=table[4][3]+sellNum*table[4][1];
                break;
            }
            case 0:{
                printf("%-10s%-11s%-10s%-10s\n","product","price","sellNum","Revenue");
                for(int i=0;i<5;i++){
                    for(int j=0;j<4;j++){
                        if(j==0){
                            printf("%-10.0f",table[i][j]);
                        }
                        else if(j==1||j==3){
                            printf("$%-10.2f",table[i][j]);
                        }
                        else if(j==2){
                            printf("%-10.0f",table[i][j]);
                        }
                    }
                    puts("");
                }
                float totalRevenue=0;
                for(int k=0;k<5;k++){
                    totalRevenue=totalRevenue+table[k][3];
                }
                printf("Total Revenue is : $%-10.2f",totalRevenue);
                return 0;
                break;
            }
            case '\n':{
                break;
            }
            default:{
                printf("%s\n","wrong input");
            }
        }//end switch
    }//end while
}//end main
