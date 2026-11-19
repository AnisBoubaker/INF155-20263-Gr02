#include <stdio.h>
#include <string.h>

#define TAILLE_MAX_NOM 50

typedef struct etudiant {
    int identifiant;
    char nom[TAILLE_MAX_NOM];
    char prenom[TAILLE_MAX_NOM];
    double tp1;
    double tp2;
    double intra;
    double final;
} Etudiant;


void afficher_etudiant(const Etudiant *et);

int main(void) {

    Etudiant et1;
    et1.identifiant = 1;
    strcpy(et1.nom, "Villeneuve");
    strcpy(et1.prenom, "Julie");
    et1.tp1 = 80;
    et1.tp2 = 60;
    et1.intra = 57;
    et1.final = 78;

    // printf("----------------\n");
    // printf("Nom complet: %s %s\n", et1.prenom, et1.nom);
    // printf("Notes: [TP1]: %.2lf, [TP2]: %.2lf, [Intra]: %.2lf, [Final]: %.2lf\n",
    //     et1.tp1, et1.tp2, et1.intra, et1.final);
    // printf("----------------\n");

    afficher_etudiant(&et1);

    printf("La note de l'intra: %.2lf\n", et1.intra);

    Etudiant et2;

    et2 = et1;

    afficher_etudiant(&et2);

    return 0;
}

void afficher_etudiant(const Etudiant *et) {
    printf("----------------\n");
    printf("Nom complet: %s %s\n", (*et).prenom, (*et).nom);
    printf("Notes: [TP1]: %.2lf, [TP2]: %.2lf, [Intra]: %.2lf, [Final]: %.2lf\n",
        et->tp1, et->tp2, et->intra, et->final);
    printf("----------------\n");
    //Interdit car le paramètre est constant
    //et->intra = 0;
}