#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *mon_fichier = NULL;

    mon_fichier = fopen("../mon_fichier.txt", "r");
    if (mon_fichier == NULL) {
        printf("Erreur d'ouverture du fichier.\n");
        exit(EXIT_FAILURE);
    }

    //Utiliser mon fichier pour lire et/ou écrire
    //Methode fgetc
    // char un_char;
    // un_char = fgetc(mon_fichier);
    // printf("%c", un_char);
    // un_char = fgetc(mon_fichier);
    // printf("%c", un_char);
    // int lecture;
    // while ( (lecture = fgetc(mon_fichier) ) != EOF) {
    //     printf("%c", lecture);
    // }

    char lecture[1000];
    // fgets(lecture, 1000, mon_fichier);
    // printf("%s", lecture);
    // fgets(lecture, 1000, mon_fichier);
    // printf("%s", lecture);
    while (fgets(lecture, 1000, mon_fichier) != NULL) {
        printf("%s", lecture);
    }
    //Une fois terminé: fermer le fichier
    fclose(mon_fichier);

    FILE *data = fopen("../data.txt", "r");
    if (data == NULL) {
        printf("Erreur d'ouverture du data.\n");
        exit(EXIT_FAILURE);
    }

    double temp_min, temp_moy, temp_max;
    char ville[50];
    char pays[50];
    if (fscanf(data, "%[^;];%[^;];%lf;%lf;%lf",ville, pays,&temp_min, &temp_moy, &temp_max)!=5 ) {
        printf("Format de fichier errone!\n");
    }

    printf("Ville: %s (%s) - Temp minimale: %lf, Moyenne: %lf, Maximale: %lf\n, ",
        ville, pays, temp_min, temp_moy, temp_max);

    fclose(data);


    FILE* copie_data = fopen("../copie_data.csv", "w");
    if (copie_data==NULL) {
        printf("Erreur d'ouverture du fichier.\n");
        exit(EXIT_FAILURE);
    }

    fprintf(copie_data, "%s,%s,%lf,%lf,%lf\n",
        ville, pays, temp_min, temp_moy, temp_max);


    fclose(copie_data);


    return 0;
}
