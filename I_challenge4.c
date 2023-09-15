#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double D, r1, r2;

    printf("Entrez les coefficients de l'equation du second degre (a, b, c) : ");
    scanf("%lf %lf %lf", &a, &b, &c);
    D = pow(b,2) - 4 * a * c;

    if (D > 0) {
        r1 = (-b + sqrt(D)) / (2 * a);
        r2 = (-b - sqrt(D)) / (2 * a);

        printf("Deux racines reelles distinctes : r1 = %.2lf, r2 = %.2lf\n", r1, r2);
    } else if (D == 0) {
        r1 = -b / (2 * a);

        printf("Une racine reelle unique : racine = %.2lf\n", r1);
    } else printf("il n'y a pas de solution");

    return 0;
}