// ======================================================
// Projet 1 : Le Transtypage (Typecasting) en C
// ======================================================

// Fichier : typecasting.c

#include <stdio.h>

int main() {
    // Le transtypage explicite
    // ---------------------------
    // Le transtypage est une conversion de type forcée. Il est utilisé pour
    // convertir une variable d'un type à un autre.

    // Exemple 1 : Conversion d'un float en int
    float nombreFlottant = 5.75;
    int nombreEntier;
    nombreEntier = (int)nombreFlottant; // Le transtypage explicite

    // Affichage des résultats
    printf("Valeur originale (float) : %.2f\n", nombreFlottant);
    printf("Valeur après transtypage (int) : %d\n", nombreEntier);

    // Exemple 2 : Conversion d'un int en char
    int codeAscii = 65; // 65 correspond au caractère 'A' en ASCII
    char caractere = (char)codeAscii;
    printf("Le caractère correspondant au code ASCII %d est : %c\n", codeAscii, caractere);

    return 0;
}
