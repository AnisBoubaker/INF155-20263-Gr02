#include <stdio.h>
#define TAILLE_MAX 100

void fibonacci(long long resultat[], int nb_elts);

int main(void) {

    long long suite_fibo[TAILLE_MAX];

    fibonacci(suite_fibo, 40);

    for (int i=0; i<40; i++) {
        printf("%lld\n", suite_fibo[i]);
    }

    return 0;
}

void fibonacci(long long resultat[], int nb_elts) {
    for (int i=0; i<nb_elts; i++) {
        if (i==0) {
            resultat[0] = 1;
        } else if (i==1) {
            resultat[1] = 1;
        } else {
            resultat[i] = resultat[i-2]+resultat[i-1];
        }
    }
}
