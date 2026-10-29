#include "chaines.h"


void retirer_retour_ligne(char* chaine){

    int fin = 0;


    while(chaine[fin]!='\0'){
        fin++;
    }
    if(fin>0 && chaine[fin-1]=='\n'){
        chaine[fin -1] = '\0';
    }
}

int compter_occurrences(const char chaine[], char caractere){
    int compteur = 0;
    for(int i=0; chaine[i]!='\0'; i++){
        if(chaine[i]==caractere){
            compteur++;
        }
    }
    return compteur;
}



void remplacer_caractere(char* chaine, char ancien_car, char nouveau_car) {
    int taille_chaine = strlen(chaine);
    for (int i=0; i<taille_chaine; i++) {
        if (chaine[i]==ancien_car) {
            chaine[i] = nouveau_car;
        }
    }
}