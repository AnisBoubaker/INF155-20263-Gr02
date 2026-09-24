#include <stdio.h>

int main(void) {
    int max_repetitions;
    int compteur;

    printf("Repeter combien de fois?");
    scanf("%d", &max_repetitions);

    for (compteur=0; compteur<max_repetitions; compteur++) {
        printf("Hello, World!\n");
    }

    // compteur = 0; //1. Initialisation du compteur
    // while (compteur < max_repetitions) //2. Condition de continuation
    // {
    //     printf("Hello, World!\n");
    //     compteur++; //3. Instruction d'incrément
    // }
    return 0;
}
