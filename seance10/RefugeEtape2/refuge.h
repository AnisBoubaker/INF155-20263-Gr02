//
// Created by Anis Boubaker on 2026-11-26.
//

#ifndef REFUGEETAPE2_REFUGE_H
#define REFUGEETAPE2_REFUGE_H

#include "animal.h"

typedef struct refuge {
    Animal **animaux;     //Tableau dynamique de pointeurs vers des Animal_s
    int nbre_animaux; //Taille effective du tableau animaux
    int capacite; //Taille maximale *actuelle* du tableau d'animaux
} Refuge;


Refuge* refuge_creer(int capacite_initiale);
void refuge_liberer(Refuge* refuge);
void refuge_afficher(const Refuge *refuge);

#endif //REFUGEETAPE2_REFUGE_H
