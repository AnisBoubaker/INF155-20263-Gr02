#include <stdio.h>

void f1(int *a) {
    *a = *a * 10;
}

void min_max(int tab[], int taille, int *min, int *max) {
    int le_min = tab[0];
    int le_max = tab[0];

    for (int i=0; i<taille; i++) {
        if (tab[i] < le_min) {
            le_min = tab[i];
        }
        if (tab[i] > le_max) {
            le_max = tab[i];
        }
    }
    *min = le_min;
    *max = le_max;
}

int main(void) {
    int x = 20;
    f1(&x);
    printf("La variable x contient: %d\n", x);

    int entiers []= { 23, 67, -3, 56, 98, -10, 56, 120, 67, 18};
    int entier_min, entier_max;
    min_max(entiers, 10, &entier_min, &entier_max);
    printf("La valeur min: %d, max: %d\n", entier_min, entier_max);
    return 0;
}
