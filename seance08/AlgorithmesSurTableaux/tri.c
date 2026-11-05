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

void tri_selection(int tab[], int taille) {
    for (int i=0; i<taille-1; i++) {
        int indice_min = i;
        for (int j=i+1; j<taille; j++) {
            if (tab[j]<tab[indice_min]) {
                indice_min = j;
            }
        }
        if (indice_min != i) {
            int tmp = tab[i];
            tab[i] = tab[indice_min];
            tab[indice_min] = tmp;
        }
    }
}
