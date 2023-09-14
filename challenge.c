#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n[15],p[15],s[15],t[10] ;
    int a;

    printf("Entrez votre nom :");
    scanf("%s",n);
    printf("Entrez votre prenom :");
    scanf("%s",p);
    printf("Entrez votre sexe :");
    scanf("%s",s);
    printf("Entrez votre numéro de téléphone :");
    scanf("%s",t);
     printf("Entrez votre age :");
    scanf("%d",&a);
        printf(" Nom : %s \n Prenom : %s \n Age : %d \n Sexe : %s \n N° tel : %s \n",n,p,a,s,t);

    return 0;
}