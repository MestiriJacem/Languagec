// ======================================================
// Projet 4 : La Gestion de la Mémoire en C
// ======================================================

// Fichier : memory_management.c

#include <stdio.h>
#include <stdlib.h>

int main() {
    // La gestion de la mémoire dynamique
    // ------------------------------------
    // En C, la mémoire peut être allouée dynamiquement à l'aide des fonctions
    // `malloc`, `calloc`, `realloc` et libérée avec `free`.

    // Exemple 1 : Allocation dynamique avec malloc
    int *tableau;
    int taille;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);

    tableau = (int *)malloc(taille * sizeof(int));
    if (tableau == NULL) {
        printf("Allocation échouée\n");
        return 1;
    }

    for (int i = 0; i < taille; i++) {
        tableau[i] = i + 1;
    }

    printf("Tableau alloué dynamiquement : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    free(tableau); // Libération de la mémoire

    // Exemple 2 : Allocation dynamique avec calloc
    tableau = (int *)calloc(taille, sizeof(int));
    if (tableau == NULL) {
        printf("Allocation échouée\n");
        return 1;
    }

    printf("Tableau initialisé avec calloc : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    free(tableau);

    return 0;
}
