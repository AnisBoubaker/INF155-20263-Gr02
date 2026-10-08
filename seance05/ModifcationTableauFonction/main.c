#include <stdio.h>

void f(int a) {
    a = a*a;
}

//Toute modification à un tableu reçu en paramètre
//modifie le tableau original qui a été passé
void f2(int tab[], int taille) {
    for (int i=0; i<taille; i++) {
        tab[i] = tab[i]*tab[i];
    }
}

//Définit le paramètre tableau comme const empêche toute modification
//du tableau dans la fonction.
double moyenne(const int tab[], int taille) {
    int somme = 0;
    for (int i=0; i<taille; i++) {
        somme+=tab[i];
    }
    return (double)somme / taille;
}

int main(void) {
    int a = 10;
    int valeurs[] = {10, 20 , 30, 40, 50};

    f(a);
    printf("La valeur de a est: %d\n", a);

    f2(valeurs, 5);
    for (int i=0; i<5; i++) {
        printf("%d\t", valeurs[i]);
    }
    printf("\n");

    moyenne(valeurs, 5);

    return 0;
}
