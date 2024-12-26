// ======================================================
// Projet 1 : Le Transtypage (Typecasting) en C
// ======================================================

// Fichier : typecasting.c

#include <stdio.h>

int main() {
    // Le transtypage explicite
    // ---------------------------
    // Le transtypage est une conversion de type forc�e. Il est utilis� pour
    // convertir une variable d'un type � un autre.

    // Exemple 1 : Conversion d'un float en int
    float nombreFlottant = 5.75;
    int nombreEntier;
    nombreEntier = (int)nombreFlottant; // Le transtypage explicite

    // Affichage des r�sultats
    printf("Valeur originale (float) : %.2f\n", nombreFlottant);
    printf("Valeur apr�s transtypage (int) : %d\n", nombreEntier);

    // Exemple 2 : Conversion d'un int en char
    int codeAscii = 65; // 65 correspond au caract�re 'A' en ASCII
    char caractere = (char)codeAscii;
    printf("Le caract�re correspondant au code ASCII %d est : %c\n", codeAscii, caractere);

    return 0;
}
