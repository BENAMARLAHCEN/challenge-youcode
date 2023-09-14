#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("entrez un caractere :");
    scanf("%c",&c);
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
    if(c >= 'A' && c <= 'Z'){
        printf("le caractère est un alphabet majuscule");
    }else printf("le caractère est un alphabet miniscule");
    }else printf("le caractère n'est pas un alphabet ");

    return 0;
}