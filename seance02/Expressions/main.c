#include <stdio.h>

int main(void) {

    int v1;
    int v2;
    v1 =10 ;
    v2 = 3;
    printf("v1 + v2 = %d\n", v1+v2);
    printf("v1 * v2 = %d\n", v1*v2);
    double resultat;
    //resultat = v1*1.0 / v2;
    resultat = (double)v1 / v2;
    printf("v1 / v2 = %lf\n", resultat);

    printf("v1 %% v2 = %d\n", v1%v2);

    v1++;
    printf("(apres ++) v1 = %d\n", v1);

    v1 = 20;
    v2 = 3;
    printf(" v1++ / v2 = %d\n", v1++/v2);
    printf("v1 = %d\n", v1);

    v1 = 20; v2 = 3;
    printf(" ++v1 / v2 = %d\n", ++v1/v2);
    printf("v1 = %d\n", v1);

    //Opérateurs de comparaison
    printf("=============================\n");
    printf("10 < 3 = %d\n", 10<3);
    printf("10 > 3 = %d\n", 10>3);

    printf(" (10 > 3) - 2 * 4 = %d\n", (10> 3) - 2*4);



    return 0;
}
