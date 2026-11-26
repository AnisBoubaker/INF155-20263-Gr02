#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "animal.h"



typedef struct refuge {
    //Option 1
    //Animal* animaux; //Tableau dynamique de Animals
    //Option 2:
    Animal **animaux;     //Tableau dynamique de pointeurs vers des Animal_s
    int nbre_animaux; //Taille effective du tableau animaux
    int capacite; //Taille maximale *actuelle* du tableau d'animaux
} Refuge;

int main(void) {

    Animal* a1 = animal_creer(1, "Max");
    strcpy(a1->espece, "Chien");
    a1->date_naiss.jour = 20;
    a1->date_naiss.mois = 7;
    a1->date_naiss.annee = 2022;
    a1->poids = 25;
    a1->est_disponible = 1;

    animal_afficher(a1);

    animal_liberer(a1);

    return 0;
}
