
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
    char *categorie; //Chaine de caractères dynamique
    Point2D coord;
} Capteur; //Commence par une majuscule

void afficher_capteur(const Capteur* capteur);

int main(void) {
    int nb_capteurs;

    printf("Combien de capteurs: ");
    scanf("%d", &nb_capteurs);

    Capteur** tab_capteurs;

    tab_capteurs = (Capteur**)malloc(nb_capteurs*sizeof(Capteur*));
    if (tab_capteurs == NULL) {
        printf("Erreur d'allocation");
        exit(EXIT_FAILURE);
    }

    for (int i=0; i<nb_capteurs; i++) {
        //Allocation du capteur i:
        tab_capteurs[i] = (Capteur*)malloc(sizeof(Capteur));
        printf("Saisie du capteur num. %d:\n", i+1);
        tab_capteurs[i]->categorie = (char*)malloc(sizeof(char)*TAILLEMAX_CAT);
        if (tab_capteurs[i]->categorie == NULL) {
            printf("Erreur d'allocation");
            exit(EXIT_FAILURE);
        }
        printf("Categorie: ");
        getchar(); //Vider le \n qui traine
        fgets(tab_capteurs[i]->categorie, TAILLEMAX_CAT, stdin);
        tab_capteurs[i]->categorie[ strlen(tab_capteurs[i]->categorie)-1 ] = '\0';
        //On ajoute 1 car on doit tenir compte du \0
        //realloc peut changer l'adresse du bloc mémoire
        char* adresse_temp = NULL;
        adresse_temp = (char*)realloc(tab_capteurs[i]->categorie, sizeof(char)*(strlen(tab_capteurs[i]->categorie)+1));
        if (adresse_temp == NULL) {
            printf("Erreur d'allocation");
            exit(EXIT_FAILURE);
        }
        tab_capteurs[i]->categorie = adresse_temp;

        printf("x: ");
        scanf("%lf", &tab_capteurs[i]->coord.x);
        printf("y: ");
        scanf("%lf", &tab_capteurs[i]->coord.y);
    }

    for (int i=0; i<nb_capteurs; i++) {
        afficher_capteur(tab_capteurs[i]);
    }

    free(tab_capteurs);

    return 0;
}

void afficher_capteur(const Capteur* capteur) {
    printf("Categorie: %s\n", capteur->categorie);
    printf("Coordonnees: (%.2lf, %.2lf)\n", capteur->coord.x, capteur->coord.y);
}