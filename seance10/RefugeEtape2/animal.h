//
// Created by Anis Boubaker on 2026-11-26.
//

#ifndef REFUGEETAPE2_ANIMAL_H
#define REFUGEETAPE2_ANIMAL_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct date {
    int jour;
    int mois;
    int annee;
} Date;

typedef struct animal {
    int id;
    char *nom;
    char espece[20];
    Date date_naiss;
    double poids;
    int est_disponible;
} Animal;


Animal* animal_creer(int id, const char* nom);
void animal_liberer(Animal* animal);
void animal_afficher(const Animal* animal);


#endif //REFUGEETAPE2_ANIMAL_H
