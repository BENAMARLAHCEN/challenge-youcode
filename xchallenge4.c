#include <stdio.h>
#include <stdlib.h>

int main()
{
    int som=0,tab[100];
    int i;
     for ( i= 0; i < 100; i++){
        printf("entrez le nombre %d :",i+1);
        scanf("%d",&tab[i]);
        } 
    for (i = 0; i < 10; i++){
        if (tab[i]>=0 && tab[i]<=100){
           som+=tab[i];
        }
        }
        printf("%d",som);
    
    return 0;
}