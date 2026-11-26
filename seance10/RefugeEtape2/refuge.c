//
// Created by Anis Boubaker on 2026-11-26.
//

#include "refuge.h"

Refuge* refuge_creer(int capacite_initiale) {
    Refuge* refuge;

    refuge = (Refuge*)malloc(sizeof(Refuge));
    if (refuge == NULL) {
        return NULL;
    }
    refuge->animaux = (Animal**)malloc(sizeof(Animal*)*capacite_initiale);
    if (refuge->animaux == NULL) {
        free(refuge);
        return NULL;
    }
    refuge->nbre_animaux = 0;
    refuge->capacite = capacite_initiale;
    return refuge;
}

//Libere le refuge et TOUS LES ANIMAUX qu'il contient
void refuge_liberer(Refuge* refuge) {
    for (int i=0; i<refuge->nbre_animaux; i++) {
        animal_liberer(refuge->animaux[i]);
    }
    free(refuge->animaux);
    free(refuge);
}

void refuge_afficher(const Refuge *refuge) {
    printf("Nombre d'animaux: %d / %d\n", refuge->nbre_animaux, refuge->capacite);
    for (int i=0; i<refuge->nbre_animaux; i++) {
        animal_afficher(refuge->animaux[i]);
    }
}

/*
 *Ajouter un animal au refuge.
 *Vérifier d'abord si la capacité du refuge le permet. Sinon, elle doit agrandir la
 *capacité du refuge (agrandir le tableau d'animaux).
 *Elle retourne une valeur vraie si l'animal a bien été ajouté, faux sinon.
 */
int refuge_ajouter(Refuge *refuge, Animal *animal) {

}