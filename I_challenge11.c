#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int i;
     srand(time(0));
     i = rand() % 7;
    switch (i) {
        case 1:
            printf("Dimanche");
            break;
        case 2:
            printf("Lundi ");
            break;
        case 3:
            printf("Mardi");
            break;
        case 4:
            printf("Mercredi");
            break;
        case 5:
            printf("Jeudi");
            break;
        case 6:
            printf("Vendredi");
            break;
        case 7:
            printf("Samedi");
            break;
        
    }
    return 0;
}