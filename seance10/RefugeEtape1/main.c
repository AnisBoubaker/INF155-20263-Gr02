#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct date {
    int jour;
    int mois;
    int annee;
} Date;

typedef struct animal {
    int id;
    char *nom;
    char espece[20];
    //Option 1:
    //int date_naiss[3];
    //Option 2:
    // int date_naiss_j;
    // int date_naiss_m;
    // int date_naiss_a;
    //Option 3
    Date date_naiss;
    double poids;
    int est_disponible;
} Animal;

typedef struct refuge {
    //Option 1
    //Animal* animaux; //Tableau dynamique de Animals
    //Option 2:
    Animal **animaux;     //Tableau dynamique de pointeurs vers des Animal_s
    int nbre_animaux; //Taille effective du tableau animaux
    int capacite; //Taille maximale *actuelle* du tableau d'animaux
} Refuge;

int main(void) {

    Animal a1;
    //L'animal s'appelle Max
    a1.nom = (char*)malloc(sizeof(char)*(strlen("Max")+1));
    if (a1.nom == NULL) {
        printf("Erreur d'allocation memoire.\n");
        exit(EXIT_FAILURE);
    }
    a1.id = 10;
    strcpy(a1.nom, "Max");
    strcpy(a1.espece, "Chien");
    a1.date_naiss.jour = 20;
    a1.date_naiss.mois = 7;
    a1.date_naiss.annee = 2022;
    a1.poids = 22.5;
    a1.est_disponible = 1;

    Refuge mon_refuge;
    mon_refuge.animaux = (Animal**)malloc(10 * sizeof(Animal*));
    if (mon_refuge.animaux == NULL) {
        printf("Erreur d'allocation memoire.\n");
        exit(EXIT_FAILURE);
    }
    mon_refuge.capacite = 10;
    mon_refuge.nbre_animaux = 0;

    mon_refuge.animaux[ mon_refuge.nbre_animaux ] = &a1;
    mon_refuge.nbre_animaux++;

    //mon_refuge.animaux[ mon_refuge.nbre_animaux ] = &a2;
    //mon_refuge.nbre_animaux++;

    return 0;
}
