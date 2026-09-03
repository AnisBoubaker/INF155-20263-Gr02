#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double note1, note2, note3;
    double moyenne;

    printf("1ere note: ");
    scanf("%lf", &note1);
    printf("2eme note: ");
    scanf("%lf", &note2);
    printf("3eme note: ");
    scanf("%lf", &note3);

    moyenne = (note1 + note2 + note3) / 3 ;
    printf("Votre moyenne est: %.2lf\n", moyenne);

    return EXIT_SUCCESS;
}
