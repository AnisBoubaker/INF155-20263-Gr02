//
// Created by Anis Boubaker on 2026-11-26.
//
#include "animal.h"

//Constructeur: créer un animal de façon dynamique
Animal* animal_creer(int id, const char* nom) {
    Animal* nouv_animal = NULL;

    nouv_animal = (Animal*)malloc(sizeof(Animal));
    if (nouv_animal == NULL) {
        return NULL;
    }

    nouv_animal->nom = (char*)malloc(sizeof(char)*(strlen(nom)+1));
    if (nouv_animal->nom == NULL) {
        free(nouv_animal); //Cette allocation a fonctionné! Il faut la libérer d'abord.
        return NULL;
    }
    nouv_animal->id = id;
    strcpy(nouv_animal->espece, "");
    strcpy(nouv_animal->nom, nom);
    nouv_animal->date_naiss.jour = 0;
    nouv_animal->date_naiss.mois = 0;
    nouv_animal->date_naiss.annee = 0;
    nouv_animal->poids = 0;
    nouv_animal->est_disponible = 0;

    return nouv_animal;
}

//Fonction destructeur
void animal_liberer(Animal* animal) {
    free(animal->nom);
    free(animal);
}

void animal_afficher(const Animal* animal) {
    printf("[%d] %s (%s), Ne le: %d/%d/%d, %.2lf Kg, %s\n",
        animal->id,
        animal->nom,
        animal->espece,
        animal->date_naiss.jour,
        animal->date_naiss.mois,
        animal->date_naiss.annee,
        animal->poids,
        animal->est_disponible ? "Disponible" : "Non disponible");
}


