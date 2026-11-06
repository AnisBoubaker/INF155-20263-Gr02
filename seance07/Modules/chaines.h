#ifndef CHAINES_H
#define CHAINES_H

// DEPENDANCES DU MODULE
#include <string.h>


/*
 * Supprime le retour à la ligne à la fin d'une chaine de caractères
 * (s'il y en a un).
 */
void retirer_retour_ligne(char* chaine);


int compter_occurrences(const char chaine[], char caractere);


void remplacer_caractere(char* chaine, char ancien_car, char nouveau_car);


#endif