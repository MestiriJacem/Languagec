// ======================================================
// Projet 3 : Le Traitement des Cha�nes de Caract�res en C
// ======================================================

// Fichier : string_processing.c

#include <stdio.h>
#include <string.h>

int main() {
    // Introduction au traitement des cha�nes de caract�res
    // ------------------------------------------------------
    // En C, les cha�nes de caract�res sont des tableaux de caract�res termin�s
    // par le caract�re nul '\0'. Elles peuvent �tre manipul�es � l'aide des
    // fonctions fournies par la biblioth�que <string.h>.

    // Exemple 1 : Copier une cha�ne
    char source[] = "Bonjour, C!";
    char destination[50];
    strcpy(destination, source); // Copie de la cha�ne source dans destination
    printf("Cha�ne copi�e : %s\n", destination);

    // Exemple 2 : Concat�ner deux cha�nes
    char chaine1[50] = "Hello";
    char chaine2[] = ", World!";
    strcat(chaine1, chaine2); // Concat�nation de chaine2 � chaine1
    printf("Cha�ne concat�n�e : %s\n", chaine1);

    // Exemple 3 : Longueur d'une cha�ne
    printf("Longueur de la cha�ne concat�n�e : %lu\n", strlen(chaine1));

    // Exemple 4 : Comparer deux cha�nes
    char mot1[] = "C";
    char mot2[] = "C";
    if (strcmp(mot1, mot2) == 0) {
        printf("Les cha�nes sont identiques.\n");
    } else {
        printf("Les cha�nes sont diff�rentes.\n");
    }

    return 0;
}
