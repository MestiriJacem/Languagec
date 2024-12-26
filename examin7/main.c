// Énoncé : Écrire un programme qui analyse un texte donné (saisi ou lu depuis un fichier) et affiche :
    // - Le nombre de caractères.
    // - Le nombre de mots.
    // - Le nombre de voyelles.
    // - Le nombre de consonnes.
// Correction :
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char texte[1000];
    int nbCaracteres = 0, nbMots = 0, nbVoyelles = 0, nbConsonnes = 0;

    printf("Entrez un texte (max 1000 caractères) :\n");
    fgets(texte, sizeof(texte), stdin);

    for (int i = 0; texte[i] != '\0'; i++) {
        char c = tolower(texte[i]);
        if (isalpha(c)) {
            nbCaracteres++;
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
                nbVoyelles++;
            } else {
                nbConsonnes++;
            }
        }
        if (isspace(texte[i]) && (i > 0 && !isspace(texte[i - 1]))) {
            nbMots++;
        }
    }
    // Compte le dernier mot si la chaîne ne se termine pas par un espace
    if (!isspace(texte[strlen(texte) - 1])) {
        nbMots++;
    }

    printf("Nombre de caractères : %d\n", nbCaracteres);
    printf("Nombre de mots : %d\n", nbMots);
    printf("Nombre de voyelles : %d\n", nbVoyelles);
    printf("Nombre de consonnes : %d\n", nbConsonnes);

    return 0;
}
