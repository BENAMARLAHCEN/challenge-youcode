#include <stdio.h>

int main() {
    int n, inv;

    printf("Entrez un nombre entier à trois chiffres : ");
    scanf("%d", &n);

    inv = (n % 10) * 100 + ((n / 10) % 10) * 10 + (n / 100);
    printf("L'inverse est : %3.d", inv);

    return 0;
}