
/*
 * Partie 1: Définir le type de données Capteur. Chaque capteur a une
 * catégorie (chaine de caractères) et une coordonnée (x et y).
 *
 * Partie 2: Écrire un programme qui demande à l'usager le nombre
 * de capteurs, et qui demande la saisie des informations
 * de chaque capteur.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAILLEMAX_CAT 50

typedef struct point2D {
    double x;
    double y;
} Point2D;

typedef struct capteur {
    char categorie[TAILLEMAX_CAT];
    //Option 3:
    Point2D coord;
    //Option 1:
    // double x;
    // double y;
    //Option2 :
    //double coords[2]; //Case 0: x; Case 1: y : plus fragile car il faut se rappeler ce que contient chaque case/
} Capteur; //Commence par une majuscule


int main(void) {
    Capteur c;

    strcpy(c.categorie, "Temperature");
    //Coordonnee (10, 34)
    c.coord.x = 10;
    c.coord.y = 34;
    
    return 0;
}
