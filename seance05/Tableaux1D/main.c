#include <stdio.h>

#define TAILLE 25

int main(void) {
    //La taille du tableau doit obligatoirement être une valeur numérique
    double temperatures[TAILLE]; //Toutes les cases ont une valeur indéfinie

    //Les cases n'ayant pas reçu de valeur initiale, recoivent automatiquement la valeur 0
    //double temperatures[TAILLE] = {10.5, 15.2, 17.8, 9.8, 17.3, 16.3, 18};

    //Initialisaer le tableau au complet avec des 0
    //double temperatures[TAILLE] = {0};

    //Création d'un tableau dont la taille maximale est déduite du nombre de valeurs
    //initiales.
    int notes[]={10, 20 , 30 , 40, 50};

    //temperatures[7] = 25;

    //Saisie des valeurs par l'usager
    int nb_valeurs =0;
    do {
        printf("Saisir une temperature: ");
        scanf("%lf",&temperatures[nb_valeurs]);
        nb_valeurs++;
    } while (temperatures[nb_valeurs-1]!=-1 && nb_valeurs < TAILLE);
    nb_valeurs--;

    for (int i=0; i<nb_valeurs; i++) {
        printf("La case %d contient: %.2lf\n", i, temperatures[i]);
    }
    //printf("La case 1 contient: %.2lf\n", temperatures[1]);
    //printf("La case 2 contient: %.2lf\n", temperatures[2]);

    double somme = 0 ;
    for (int i=0; i<nb_valeurs; i++) {
        somme+= temperatures[i];
    }
    double moyenne = somme / nb_valeurs;

    printf("La moyenne des valeurs est: %.2lf\n", moyenne);




    return 0;
}
