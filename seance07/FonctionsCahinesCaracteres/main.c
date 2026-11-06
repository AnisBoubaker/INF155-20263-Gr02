#include <stdio.h>
#include <string.h>

#define TAILLE_MAX_CHAINE 100

int main(void) {
    char nom[TAILLE_MAX_CHAINE];

    printf("Veuillez saisir votre nom: ");
    //scanf s'arrête de lire à un espace
    //scanf("%s", nom); //ATTENTION: pas de & car nom est déjà l'adresse où on doit stocker l'info.

    fgets(nom, TAILLE_MAX_CHAINE, stdin);

    //Déterminer la taille de la chaine
    // int i =0 ;
    // while (nom[i]!='\0') {
    //     i++;
    // }
    // nom[i-1] = '\0';
    nom[ strlen(nom) - 1 ] = '\0';

    printf("Bonjour %s\n", nom);

    char copie_nom[TAILLE_MAX_CHAINE];

    //copie_nom = nom; //Encore une fois, interdit!
    strcpy(copie_nom, nom);

    printf("La copie du nom: %s\n", copie_nom);

    char cours[TAILLE_MAX_CHAINE];

    strcpy(cours , "INF155");

    printf("Le nom du cours: %s\n", cours);

    char prenom[TAILLE_MAX_CHAINE];

    printf("Saisir votre prenom: ");
    fgets(prenom, TAILLE_MAX_CHAINE, stdin);
    prenom[strlen(prenom)-1] = '\0';

    char nom_complet[TAILLE_MAX_CHAINE];
    strcpy(nom_complet, prenom);
    strcat(nom_complet, " ");
    strcat(nom_complet, nom);

    printf("Votre nom complet: %s\n", nom_complet);

    printf("%s %s prend le cours %s\n", prenom, nom, cours);

    char dest[1000];
    snprintf(dest, 1000, "%s %s prend le cours %s\n", prenom, nom, cours);

    //Copier une chaine dans une autre
    //sprintf(dest, "%s", source);

    //Concaténer deux chaines de caractères (eq. de strcat)
    //sprintf(dest, "%s%s", dest, source);
    printf("%s", dest);



    return 0;
}
