#include <stdio.h>
#include <string.h>
#include "chaines.h"

int main(void) {
    char chaine[100];

    strcpy(chaine ,  "Bonjour le monde!");

    remplacer_caractere(chaine, ' ', '_');

    printf("%s\n", chaine);

    return 0;
}









