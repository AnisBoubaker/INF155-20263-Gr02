#include <stdio.h>

#define MAX_LIGNES 7
#define MAX_COLONNES 15

double moyenne_tab2d(const double tab[][MAX_COLONNES], int nb_lignes, int nb_colonnes);

int main(void) {
    double temperatures[MAX_LIGNES][MAX_COLONNES] = {
        {15, 17, 16, 14.5, 17.2},
        {12,13.5, 18.2, 22, 21},
        {17.3, 16.2, 15.3, 19.2, 20.1}
    };

    printf("La case 2,1 contient: %.2lf\n", temperatures[2][1]);

    // for (int i=0; i<5; i++) {
    //     printf("%.2lf\t", temperatures[0][i]);
    // }
    // printf("\n");
    // for (int i=0; i<5; i++) {
    //     printf("%.2lf\t", temperatures[1][i]);
    // }
    // printf("\n");

    for (int j = 0; j< 3; j++) {
        for (int i=0; i<5; i++) {
            printf("%.2lf\t", temperatures[j][i]);
        }
        printf("\n");
    }

    // double somme =0;
    // for (int i=0; i<3; i++) {
    //     for (int j=0; j<5; j++) {
    //         somme += temperatures[i][j];
    //     }
    // }
    // double moyenne = somme / (3*5);
    double moyenne;
    moyenne = moyenne_tab2d(temperatures,3, 5);
    printf("La moyenne des temperatures: %.2lf\n", moyenne);

    return 0;
}

double moyenne_tab2d(const double tab[][MAX_COLONNES], int nb_lignes, int nb_colonnes) {
    double somme = 0;
    for (int i=0; i<nb_lignes; i++) {
        for (int j=0; j<nb_colonnes; j++) {
            somme += tab[i][j];
        }
    }
    return somme / (nb_lignes*nb_colonnes);
}