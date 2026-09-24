#include <stdio.h>

int main(void) {
    int saisie;

    do {
        printf("Saisir un entier entre 0 et 100: ");
        scanf("%d",&saisie);
    } while (saisie<0 || saisie>100);



    //printf("Saisir un entier entre 0 et 100: ");
    //scanf("%d",&saisie);
    // saisie = -1;
    // while (saisie<0 || saisie>100) {
    //     printf("Saisir un entier entre 0 et 100: ");
    //     scanf("%d",&saisie);
    // }


    return 0;
}
