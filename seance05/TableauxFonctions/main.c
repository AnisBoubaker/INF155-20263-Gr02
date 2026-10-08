#include <stdio.h>
#define TAILLE_MAX 50

double moyenne_tab(int tab[], int taille);
void afficher_tableau(int tab[], int taille);

int main(void) {
    int notes[TAILLE_MAX];
    int nb_notes;

    printf("Combien de notes: ");
    scanf("%d", &nb_notes);

    for (int i=0; i<nb_notes; i++) {
        printf("Saisir la note num. %d: ", i+1);
        scanf("%d", &notes[i]);
    }

    printf("La notes saisies sont: \n");
    afficher_tableau(notes, nb_notes);

    // for (int i=0; i<nb_notes; i++) {
    //     printf("%d\t", notes[i]);
    // }
    // printf("\n");

    // double moyenne = 0;
    // for (int i=0; i<nb_notes; i++) {
    //     moyenne += notes[i];
    // }
    // moyenne = moyenne / nb_notes;

    printf("La moyenne est: %.2lf\n", moyenne_tab(notes,nb_notes));

    return 0;
}

//Ne pas mettre de taille entre les crochets
//La fonction peut recevoir tout tableau d'ENTIERS (rien d'autre!)
double moyenne_tab(int tab[], int taille) {
    int somme = 0;
    for (int i=0; i<taille; i++) {
        somme += tab[i];
    }
    return (double)somme / taille;
}

void afficher_tableau(int tab[], int taille) {
    for (int i=0; i<taille; i++) {
        printf("%d\t", tab[i]);
    }
    printf("\n");
}

