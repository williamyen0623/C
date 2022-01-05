#include <stdio.h>
int main(void){
    float input;
    printf("%s","Please input the temperature(Fahrenheit) :");
    scanf("%f",&input);
    printf("%+10.3f °F\n",input);
    printf("%+10.3f °C",(input-32)*5/9);
    return 0;
}