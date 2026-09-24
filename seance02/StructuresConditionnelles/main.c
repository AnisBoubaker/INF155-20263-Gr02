#include <stdio.h>

int main(void) {
    int a_deviner = 25;
    int saisie;

    printf("Devinez le nombre: ");
    scanf("%d", &saisie);

    if (saisie == a_deviner) {
        printf("Vous avez gagne!\n");
    } else if (saisie>=a_deviner-5  &&  saisie<=a_deviner+5) {
        printf("Vous etes proche!\n");
    } else {
        printf("Vous avez perdu!\n");
    }


    // if (saisie == a_deviner) {
    //     printf("Vous avez gagne!\n");
    // } else {
    //     if (saisie>=a_deviner-5  &&  saisie<=a_deviner+5 ) {
    //         printf("Vous etes proche!\n");
    //     } else {
    //         printf("Vous avez perdu!\n");
    //     }
    // }

    return 0;
}
