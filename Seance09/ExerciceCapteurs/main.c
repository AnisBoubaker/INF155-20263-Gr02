
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

void afficher_capteur(const Capteur* capteur);

int main(void) {
    // Capteur c;
    //
    // strcpy(c.categorie, "Temperature");
    // //Coordonnee (10, 34)
    // c.coord.x = 10;
    // c.coord.y = 34;

    int nb_capteurs;

    printf("Combien de capteurs: ");
    scanf("%d", &nb_capteurs);

    Capteur* tab_capteurs;

    tab_capteurs = (Capteur*)malloc(nb_capteurs*sizeof(Capteur));
    if (tab_capteurs == NULL) {
        printf("Erreur d'allocation");
        exit(EXIT_FAILURE);
    }

    for (int i=0; i<nb_capteurs; i++) {
        printf("Saisie du capteur num. %d:\n", i+1);
        printf("Categorie: ");
        getchar(); //Vider le \n qui traine
        fgets(tab_capteurs[i].categorie, TAILLEMAX_CAT, stdin);
        tab_capteurs[i].categorie[ strlen(tab_capteurs[i].categorie)-1 ] = '\0';

        printf("x: ");
        scanf("%lf", &tab_capteurs[i].coord.x);
        printf("y: ");
        scanf("%lf", &tab_capteurs[i].coord.y);
    }

    for (int i=0; i<nb_capteurs; i++) {
        afficher_capteur(&tab_capteurs[i]);
    }

    free(tab_capteurs);

    return 0;
}

void afficher_capteur(const Capteur* capteur) {
    printf("Categorie: %s\n", capteur->categorie);
    printf("Coordonnees: (%.2lf, %.2lf)\n", capteur->coord.x, capteur->coord.y);
}