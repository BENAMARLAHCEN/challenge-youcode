#include <stdio.h>
#include <math.h>

int main() {
    int AN;
    char c;
    printf("entrez l'annee que vous avez choisie :");
    scanf("%d",&AN);
    printf("menu : \n Mois :m \n Jours :j \n Heures :h \n Minutes :t  ");
    printf("entrez votre chois :");
    scanf("%c",&c);
    
    switch(c) {
        case 'm' : printf("%d",AN*12);
        break;
        case 'j' : printf("%d",AN*365);
        break;
        case 'h' : printf("%d",AN*365*24);
        break;
        case 't' : printf("%d",AN*365*24*60);
        break;
        default  : printf("ereur");
        break; 
    }

    return 0;
}