#include <stdio.h>

float saisie_note(float min, float max) {
    float note;

    printf("Entrez la note : ");
    scanf("%f", &note);

    while (note < min || note > max) {
        printf("Note invalide. Recommencez : ");
        scanf("%f", &note);
    }
    return note;
}

/*
 *Affiche si la personne a réussi ou pas et renvoie vrai si c'est le cas, faux sinon.
 */
int reussite(float note) {
    if (note >= 60) {
        printf("Resultat : Reussite\n");
        return 1;
    }
    else {
        printf("Resultat : Echec\n");
        return 0;
    }
}

void afficher_mention(float note) {
    if (note >= 90) {
        printf("Mention : Excellent\n");
    }
    else if (note >= 80) {
        printf("Mention : Tres bien\n");
    }
    else if (note >= 70) {
        printf("Mention : Bien\n");
    }
    else if (note >= 60) {
        printf("Mention : Passable\n");
    }
    else {
        printf("Mention : Aucune\n");
    }
}


int main() {
    int nbEtudiants;
    int i;
    float note;
    float somme = 0;
    int nbReussites = 0;

    printf("Nombre d'etudiants : ");
    scanf("%d", &nbEtudiants);

    for (i = 1; i <= nbEtudiants; i++) {
        printf("\nEtudiant %d\n", i);
        note = saisie_note(0, 100);
        somme = somme + note;
        nbReussites+=reussite(note);
        afficher_mention(note);
    }

    printf("\n--- Resultats du groupe ---\n");
    printf("Moyenne : %.1f\n", somme / nbEtudiants);
    printf("Reussites : %d\n", nbReussites);
    printf("Echecs : %d\n", nbEtudiants - nbReussites);

    return 0;
}