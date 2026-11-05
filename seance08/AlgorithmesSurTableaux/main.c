#include <stdio.h>
#include "fouille.h"
#include "tri.h"


int main(void) {
    // int tab[] = {10, 23, 45, 67, 89, 102, 156, 220, 257, 356, 422};
    //
    // printf("La position: %d\n", fouille_binaire(tab, 11, 10));
    int tab[] = {45, 23, 12, 89, 123, 5, 23, 67, 95, 120, 18};
    afficher_tableau(tab, 11);

    tri_insertion(tab, 11);
    printf("Tri insertion: ");
    afficher_tableau(tab, 11);

    return 0;
}

