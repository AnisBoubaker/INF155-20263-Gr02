#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int un_entier;

    int *entier_dynamique = NULL; //Toujours initialiser à NULL un pointeur déclaré

    entier_dynamique = (int*)malloc(sizeof(int));
    if (entier_dynamique == NULL) { //À faire systématiquement après chaque malloc
        printf("Erreur d'allocation\n");
        exit(EXIT_FAILURE);
    }

    *entier_dynamique = 10;
    printf("L'entier dynamique contient: %d\n", *entier_dynamique);

    int nb_entiers;
    printf("Combien d'entiers: ");
    scanf("%d", &nb_entiers);

    int *tab_dynamique = NULL;
    tab_dynamique = (int*)malloc(nb_entiers * sizeof(int));
    if (tab_dynamique == NULL) { //if (!tab_dynamique)
        printf("Erreur d'allocation\n");
        exit(EXIT_FAILURE);
    }

    // *(tab_dynamique + 0) = 10;
    // *(tab_dynamique + 1) = 20;
    // *(tab_dynamique + 2) = 45; //Equivalent à : tab_dynamique[2]

    tab_dynamique[0] = 10;
    tab_dynamique[1] = 20;
    tab_dynamique[2] = 45;

    for (int i=0; i<3; i++) {
        printf("%d\n", tab_dynamique[i]);
    }

    free(tab_dynamique);
    tab_dynamique = NULL; //Toujours remettre le pointeur à NULL apres libération.

    return 0;
}
