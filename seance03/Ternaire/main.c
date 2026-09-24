#include <stdio.h>

int main(void) {
    double saisie, val_absolue;

    printf("Saisir un nombre: ");
    scanf("%lf", &saisie);

    val_absolue = (saisie < 0) ? -saisie : saisie;

    printf("La valeur absolue: %lf\n", val_absolue);

    return 0;
}
