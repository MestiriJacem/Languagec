// ======================================================
// Projet 4 : La Gestion de la M�moire en C
// ======================================================

// Fichier : memory_management.c

#include <stdio.h>
#include <stdlib.h>

int main() {
    // La gestion de la m�moire dynamique
    // ------------------------------------
    // En C, la m�moire peut �tre allou�e dynamiquement � l'aide des fonctions
    // `malloc`, `calloc`, `realloc` et lib�r�e avec `free`.

    // Exemple 1 : Allocation dynamique avec malloc
    int *tableau;
    int taille;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);

    tableau = (int *)malloc(taille * sizeof(int));
    if (tableau == NULL) {
        printf("Allocation �chou�e\n");
        return 1;
    }

    for (int i = 0; i < taille; i++) {
        tableau[i] = i + 1;
    }

    printf("Tableau allou� dynamiquement : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    free(tableau); // Lib�ration de la m�moire

    // Exemple 2 : Allocation dynamique avec calloc
    tableau = (int *)calloc(taille, sizeof(int));
    if (tableau == NULL) {
        printf("Allocation �chou�e\n");
        return 1;
    }

    printf("Tableau initialis� avec calloc : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    free(tableau);

    return 0;
}
