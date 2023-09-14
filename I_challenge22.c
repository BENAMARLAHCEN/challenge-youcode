#include <stdio.h>

int main() {
    char c;

    printf("Entrez un caractère : ");
    scanf("%c", &c);

    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Le caractère est une voyelle.\n");
            break;
        default:
            printf("Le caractère n'est pas une voyelle.\n");
            break;
    }

    return 0;
}