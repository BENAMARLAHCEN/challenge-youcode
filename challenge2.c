#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F,C;
    printf("Rnter the temperature in Fahrenheit :");
    scanf("%f",&F);
    C = (F-32)/1.8 ;
    printf("%f",C);
    if(C>40){
        printf("the temperature is too high");
    }else if(C>28){
        printf("the temperature is high");
    }else if(C>=0){
        printf("the temperature is low");
    }else{
        printf("the temperature is too low");
    }
    

    return 0;
}