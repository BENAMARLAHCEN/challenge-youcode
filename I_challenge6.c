#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("entrez un numbre :");
    scanf("%d",&num);
    if(num>0){
        printf("le nombre est positif");
    }else if(num<0){
        printf("le nombre est négatif");
    }else printf("le nombre est négatif nul");
    

    return 0;
}