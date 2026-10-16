#include <stdio.h>

int main(void) {
    int a = 10;
    int *adresse_de_a;

    double *ptr;



    printf("L'adresse de la variable a est: %d\n", &a);
    printf("L'adresse de la variable a est: %p\n", &a);

    adresse_de_a = &a;

    *adresse_de_a = 100;

    printf("La valeur de a est: %d\n", a);

    printf("La valeur qui se trouve à l'adresse contenue par adresse_de_a est: %d", *adresse_de_a);



    return 0;
}
