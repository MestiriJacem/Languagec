// ======================================================
// Projet 3 : Le Traitement des Chaînes de Caractères en C
// ======================================================

// Fichier : string_processing.c

#include <stdio.h>
#include <string.h>

int main() {
    // Introduction au traitement des chaînes de caractères
    // ------------------------------------------------------
    // En C, les chaînes de caractères sont des tableaux de caractères terminés
    // par le caractère nul '\0'. Elles peuvent être manipulées à l'aide des
    // fonctions fournies par la bibliothèque <string.h>.

    // Exemple 1 : Copier une chaîne
    char source[] = "Bonjour, C!";
    char destination[50];
    strcpy(destination, source); // Copie de la chaîne source dans destination
    printf("Chaîne copiée : %s\n", destination);

    // Exemple 2 : Concaténer deux chaînes
    char chaine1[50] = "Hello";
    char chaine2[] = ", World!";
    strcat(chaine1, chaine2); // Concaténation de chaine2 à chaine1
    printf("Chaîne concaténée : %s\n", chaine1);

    // Exemple 3 : Longueur d'une chaîne
    printf("Longueur de la chaîne concaténée : %lu\n", strlen(chaine1));

    // Exemple 4 : Comparer deux chaînes
    char mot1[] = "C";
    char mot2[] = "C";
    if (strcmp(mot1, mot2) == 0) {
        printf("Les chaînes sont identiques.\n");
    } else {
        printf("Les chaînes sont différentes.\n");
    }

    return 0;
}
