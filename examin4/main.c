// Énoncé : Lire un fichier texte et afficher le nombre de caractères, mots et lignes qu’il contient.
// Correction :
#include <stdio.h>

int main() {
    FILE *file;
    char c;
    int nbCaracteres = 0, nbMots = 0, nbLignes = 0;

    file = fopen("texte.txt", "r");
    if (file == NULL) {
        printf("Erreur : Impossible d'ouvrir le fichier.\n");
        return 1;
    }

    while ((c = fgetc(file)) != EOF) {
        nbCaracteres++;
        if (c == ' ' || c == '\n') {
            nbMots++;
        }
        if (c == '\n') {
            nbLignes++;
        }
    }
    fclose(file);

    printf("Nombre de caractères : %d\n", nbCaracteres);
    printf("Nombre de mots : %d\n", nbMots);
    printf("Nombre de lignes : %d\n", nbLignes);

    return 0;
}
