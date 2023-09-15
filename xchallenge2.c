#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num,i,j,e;

    printf("Enter un numbre :");
    scanf("%d",&num);
    if (num>=0)
    {
        
    
    for (e = 0; e < num; e++)
    {


    for (i = 1; i < num-e ; i++){
            printf(" ");
        }

    for (j = 0; j < 1+ 2*e; j++){
        printf("*");
        }   
        printf("\n");

    
   }
    }else {
        for (e = 0; e < num; e++)
    {

    for (j = 0; j < e; j++){
        printf(" ");
        }  
    for (i = 0; i < 2*(num-e)-1 ; i++){
            printf("*");
        }

     
        printf("\n");

    
   }
    }
    return 0;
}