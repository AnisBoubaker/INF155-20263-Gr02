#include <stdio.h>

int main(void) {
    int tab[] = {10, 20, 30 , 40, 50};
    int *toto;

    printf("%d\n", *tab);

    printf("L'adresse de la premiere case du tableau: %p\n", tab);
    printf("L'adresse de la premiere case du tableau: %p\n", tab+1);

    printf("L'entier a l'adresse tab+1 est: %d\n", *(tab+1));

    toto = tab;

    printf("%d\n", toto[2]);


    return 0;
}
