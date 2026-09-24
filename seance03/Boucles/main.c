#include <stdio.h>

int main(void) {
    double montant;

    printf("Saisir un montant d'argent: ");
    scanf("%lf", &montant);

    while (montant >= 5) {
        printf("Distribution d'un 5$\n");
        montant = montant -5;
    }

    printf("Fin de la distribution!\n");
    printf("Montant restant: %lf\n", montant);

    return 0;

}
