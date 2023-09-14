#include <stdio.h>

int main() {
    int n, inv;

    printf("Entrez un nombre entier à trois chiffres : ");
    scanf("%d", &n);
    if(n % 2 == 0){
            printf("Le nombre est paire");
    }else printf("Le nombre est impaire");


    return 0;
}