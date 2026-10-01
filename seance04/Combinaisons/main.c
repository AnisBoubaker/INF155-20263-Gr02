#include <stdio.h>

//Déclarations de fonctions
double factorielle(int nb);
int nb_combinaisons(int nb_total, int nb_par_groupe);

int main(void) {

    int nb_etudiants, nb_par_groupe;

    printf("Combien d'etudiants: ");
    scanf("%d", &nb_etudiants);

    printf("Combien par groupe: ");
    scanf("%d", &nb_par_groupe);

    printf("Il existe %d possibilites de former des groupes de %d parmi %d.\n",
        nb_combinaisons(nb_etudiants, nb_par_groupe), nb_par_groupe, nb_etudiants
        );


    // printf("5! = %.0lf\n", factorielle(5));
    // printf("0! = %.0lf\n", factorielle(0));
    // printf("1! = %.0lf\n", factorielle(0));
    // printf("100! = %.0lf\n", factorielle(100));

    // printf("Le nombre de combinaisons de 3 parmi 10: %d\n", nb_combinaisons(10, 3));
    // printf("Le nombre de combinaisons de 5 parmi 5: %d\n", nb_combinaisons(5, 5));
    // printf("Le nombre de combinaisons de 10 parmi 3: %d\n", nb_combinaisons(3, 10));
    return 0;
}

int nb_combinaisons(int nb_total, int nb_par_groupe) {
    return factorielle(nb_total) / (factorielle(nb_par_groupe)*factorielle(nb_total-nb_par_groupe));
}

double factorielle(int nb) {
    double resultat = 1;

    for (int i=1; i<=nb; i++) {
        resultat *= i;
    }
    return resultat;
}

