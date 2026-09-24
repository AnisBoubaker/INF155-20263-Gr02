#include <stdio.h>

#define FFLUSH() do{} while(getchar()!='\n')

int main(void) {
    double val1, val2;
    char operation;

    printf("SUPER CALCULATRICE:\n");
    printf("Saisir valeur 1: ");
    scanf("%lf", &val1);
    printf("Saisir valeur 2: ");
    scanf("%lf", &val2);

    printf("Choisir l'operation (+, -, *, /): ");
    FFLUSH();
    scanf("%c", &operation);

    switch (operation) {
        case 'a':
        case '+':
            printf("Le résultat est: %lf\n", val1 + val2);
            break;
        case 's':
        case '-':
            printf("Le résultat est: %lf\n", val1 - val2);
            break;
        case 'm':
        case '*':
            printf("Le résultat est: %lf\n", val1 * val2);
            break;
        case 'd':
        case '/':
            printf("Le résultat est: %lf\n", val1 / val2);
            break;
        default:
            printf("Operation incorrecte!!\n");
    }



    // if (operation=='+') {
    //     printf("Le résultat est: %lf\n", val1 + val2);
    // } else if (operation=='-') {
    //     printf("Le résultat est: %lf\n", val1 - val2);
    // } else if (operation=='*') {
    //     printf("Le résultat est: %lf\n", val1 * val2);
    // } else if (operation=='/'){
    //     printf("Le résultat est: %lf\n", val1 / val2);
    // } else {
    //     printf("Opération incorrecte!\n");
    // }

    return 0;
}
