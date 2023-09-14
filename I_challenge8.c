#include <stdio.h>
#include <stdlib.h>

int main()
{
    float moy;
    printf("Entez la moyenne de l'élève :");
    scanf("%f",&moy);
    if(moy > 0 && moy < 10){
        printf("l'élève il est recalé");
    }else if(moy < 12){
        printf("l'élève il obtient la mention passable");
    }else if(moy < 14){
        printf("l'élève il obtient la mention assez bien");
    }else if(moy < 16){
        printf("l'élève il obtient la mention bien");
    }else{
        printf("l'élève il obtient la mention très bien");
    }
    

    return 0;
}