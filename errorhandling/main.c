// ======================================================
// Projet 5 : Le Traitement des Erreurs en C
// ======================================================

// Fichier : error_handling.c

#include <stdio.h>
#include <stdlib.h>
#include <errno.h> // Pour la gestion des erreurs syst�me
#include <string.h> // Pour strerror

int main() {
    // Introduction au traitement des erreurs
    // --------------------------------------
    // En C, les erreurs peuvent �tre trait�es de diff�rentes mani�res :
    // 1. En v�rifiant les valeurs de retour des fonctions.
    // 2. En utilisant les variables globales comme `errno` pour les erreurs syst�me.
    // 3. En affichant des messages d'erreur explicites avec `perror` ou `strerror`.

    // Exemple 1 : V�rification de la valeur de retour
    FILE *fichier = fopen("fichier_inexistant.txt", "r");
    if (fichier == NULL) {
        printf("Erreur : Impossible d'ouvrir le fichier\n");
    } else {
        printf("Fichier ouvert avec succ�s\n");
        fclose(fichier);
    }

    // Exemple 2 : Utilisation de errno
    // Lorsque certaines fonctions �chouent, elles d�finissent la valeur de la variable `errno`.
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
            perror("Erreur d'allocation m�moire");
            return 1;
        }
        free(tableau);
    }

    // Exemple 4 : Erreurs personnalis�es
    // ----------------------------------
    // Vous pouvez d�finir vos propres codes d'erreur et les afficher avec des messages explicites.

    int age = -3; // Valeur d'exemple non valide

    if (age < 0) {
        fprintf(stderr, "Erreur : L'�ge ne peut pas �tre n�gatif (%d)\n", age);
        return 1;
    } else {
        printf("�ge valide : %d\n", age);
    }

    return 0;
}
