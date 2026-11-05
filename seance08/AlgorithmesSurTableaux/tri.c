//
// Created by Anis Boubaker on 2026-11-05.
//

#include "tri.h"

void afficher_tableau(int tab[], int taille) {
    for (int i=0; i<taille; i++) {
        printf("%d\t", tab[i]);
    }
    printf("\n");
}

void tri_insertion(int tab[], int taille) {
    for (int i=1; i<taille; i++) {
        int valeur = tab[i];
        int j = i;
        while (j>0 && tab[j-1]>valeur) {
            tab[j] = tab[j-1];
            j--;
        }
        tab[j] = valeur;
    }
}
