#include <stdio.h>

int main(void) {
    unsigned int age; //Déclaration de la variable age.
    double salaire;

    age = 22;
    printf("La variable age contient: %d\n", age);
    age = 18;
    printf("La variable age contient: %d\n", age);

    salaire = 100000;
    printf("La personne qui s'appelle \"Jeanne\" a %d ans et gagne %.2lf $\n",
        age, salaire);

    char note;

    note = 'A';
    printf("La variable note contient: %d\n", note);
    printf("La variable note contient: %c\n", note);

    note = 'B' + 2;
    printf("La variable note contient: %c\n", note);

    return 0;
}
