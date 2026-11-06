#include <stdio.h>

int main(void) {
    //char bonjour[] = {'B', 'o', 'n', 'j', 'o', 'u', 'r', '\0'};
    char bonjour[] = "Bonjour";
    char* nom = "Valjean";


    //bonjour = "Allo"; PAS PERMIS: On ne peut pas affecter des tableaux

    bonjour[0]='A';
    bonjour[1]='l';
    bonjour[2]='l';
    bonjour[3]='o';
    bonjour[4]='\0';

    printf("%s\n", bonjour);

    printf("Le nom est: %s\n", nom);

    //nom[0] = 'K'; //Interdit: On modifie une chaine dans le bloc de code!

    nom = "Kaljean";

    printf("Le nouveau nom est: %s\n", nom);

    return 0;
}
