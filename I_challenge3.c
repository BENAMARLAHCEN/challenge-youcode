#include <stdio.h>

int main() {
    int a,b;

    printf("Entrez un numbre :");
    scanf("%d",&a);
    printf("Entrez un numbre :");
    scanf("%d",&b);
    if(a==b){
        printf("les deux valeurs sont identiques, le triple de leur somme est :%d",3*(a+b));
    }else printf("la somme est :%d",a+b);

    return 0;
}