// ======================================================
// Projet 5 : Le Traitement des Erreurs en C
// ======================================================

// Fichier : error_handling.c

#include <stdio.h>
#include <stdlib.h>
#include <errno.h> // Pour la gestion des erreurs système
#include <string.h> // Pour strerror

int main() {
    // Introduction au traitement des erreurs
    // --------------------------------------
    // En C, les erreurs peuvent être traitées de différentes manières :
    // 1. En vérifiant les valeurs de retour des fonctions.
    // 2. En utilisant les variables globales comme `errno` pour les erreurs système.
    // 3. En affichant des messages d'erreur explicites avec `perror` ou `strerror`.

    // Exemple 1 : Vérification de la valeur de retour
    FILE *fichier = fopen("fichier_inexistant.txt", "r");
    if (fichier == NULL) {
        printf("Erreur : Impossible d'ouvrir le fichier\n");
    } else {
        printf("Fichier ouvert avec succès\n");
        fclose(fichier);
    }

    // Exemple 2 : Utilisation de errno
    // Lorsque certaines fonctions échouent, elles définissent la valeur de la variable `errno`.
    fichier = fopen("fichier_inexistant.txt", "r");
    if (fichier == NULL) {
        printf("Erreur : %s\n", strerror(errno));
    }

    // Exemple 3 : Gestion des erreurs pour l'allocation dynamique
    int *tableau;
    int taille = -5; // Taille invalide

    if (taille <= 0) {
        printf("Erreur : Taille invalide (%d)\n", taille);
    } else {
        tableau = (int *)malloc(taille * sizeof(int));
        if (tableau == NULL) {
            perror("Erreur d'allocation mémoire");
            return 1;
        }
        free(tableau);
    }

    // Exemple 4 : Erreurs personnalisées
    // ----------------------------------
    // Vous pouvez définir vos propres codes d'erreur et les afficher avec des messages explicites.

    int age = -3; // Valeur d'exemple non valide

    if (age < 0) {
        fprintf(stderr, "Erreur : L'âge ne peut pas être négatif (%d)\n", age);
        return 1;
    } else {
        printf("Âge valide : %d\n", age);
    }

    return 0;
}
