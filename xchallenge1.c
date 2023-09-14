#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num,tab[10];
    printf("Enter un numbre :");
    scanf("%d",&num);
    for (int i = 0; i < 10; i++){
        tab[i]=num*(i+1);
        }
    for (int i = 0; i < 10; i++){
        printf("%d \n",tab[i]);
        }    
    
    
    
    
    
    return 0;
}