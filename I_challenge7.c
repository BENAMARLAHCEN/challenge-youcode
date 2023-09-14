#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("entrez un caractere :");
    scanf("%c",&c);
    if(c >= 65 && c <=90){
        printf("le caractère est un alphabet majuscule");
    }else printf("le caractère est un alphabet miniscule");
    

    return 0;
}