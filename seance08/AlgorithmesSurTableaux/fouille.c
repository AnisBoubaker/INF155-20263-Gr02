//
// Created by Anis Boubaker on 2026-11-05.
//

#include "fouille.h"

int fouille_lineaire(const int articles[], int n, int numero){
    for(int i=0; i<n; i++){
        if(articles[i]==numero){
            return i;
        }
    }
    return -1;
}

int fouille_binaire(const int valeurs[], int nombre, int cible)
{
    int debut = 0, fin = nombre;
    while (debut < fin) {
        int milieu = debut + (fin - debut) / 2;

        if (valeurs[milieu] == cible) return milieu;

        if (valeurs[milieu] < cible) {
            debut = milieu + 1;
        } else {
            fin = milieu;
        }
    }
    return -1;
}
