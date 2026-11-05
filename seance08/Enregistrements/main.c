#include <stdio.h>

typedef struct etudiant {
    double tp1;
    double tp2;
    double intra;
    double final;
    int age;
} etudiant;

typedef unsigned int uint;
//typedef struct etudiant etudiant;

int main(void) {
    int a;
    struct etudiant e1;
    etudiant e2;

    uint var1;

    e1.tp1 = 80;
    e1.tp2 = 79;
    e1.intra = 68;
    e1.final = 75;
    e1.age = 25;

    printf("L'etudiant a %d ans et a obtenu %.2lf au TP1, %.2lf au TP2, %.2lf a l'intra et %.2lf au final",
        e1.age, e1.tp1, e1.tp2, e1.intra, e1.final);


    int tab[40];
    etudiant classe[40];

    //Mettre la note 90 à l'étudiant-e se trouvant à l'indice 2
    classe[2].tp1 = 90;




    return 0;
}
