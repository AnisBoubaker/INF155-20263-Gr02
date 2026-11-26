#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "animal.h"
#include "refuge.h"


int main(void) {

    Animal* a1 = animal_creer(1, "Max");
    strcpy(a1->espece, "Chien");
    a1->date_naiss.jour = 20;
    a1->date_naiss.mois = 7;
    a1->date_naiss.annee = 2022;
    a1->poids = 25;
    a1->est_disponible = 1;

    //animal_afficher(a1);

    Refuge *mon_refuge = refuge_creer(5);

    mon_refuge->animaux[ mon_refuge->nbre_animaux ] = a1;
    mon_refuge->nbre_animaux++;
    // refuge_ajouter(mon_refuge, a1);

    refuge_afficher(mon_refuge);

    //animal_liberer(a1);

    return 0;
}
