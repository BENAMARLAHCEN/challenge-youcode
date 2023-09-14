#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Entrez un nombre :");
    scanf("%d",&n);
    printf("la valeur équivalente en octal est : %o \n",n);
    printf("la valeur équivalente en hexadécimal est : %x",n);
    
    return 0;
}