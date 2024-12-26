// Énoncé : Écrire un programme qui gère une liste d'étudiants (nom, âge, note moyenne).
// Permettre à l'utilisateur de :
    // 1. Ajouter un étudiant.
    // 2. Afficher tous les étudiants.
    // 3. Rechercher un étudiant par son nom.
// Utiliser des structures et un tableau dynamique.
// Correction :
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nom[50];
    int age;
    float moyenne;
} Etudiant;

void ajouterEtudiant(Etudiant **etudiants, int *taille) {
    (*taille)++;
    *etudiants = realloc(*etudiants, (*taille) * sizeof(Etudiant));
    if (*etudiants == NULL) {
        printf("Erreur de mémoire.\n");
        exit(1);
    }
    printf("Entrez le nom : ");
    scanf("%s", (*etudiants)[*taille - 1].nom);
    printf("Entrez l'âge : ");
    scanf("%d", &(*etudiants)[*taille - 1].age);
    printf("Entrez la moyenne : ");
    scanf("%f", &(*etudiants)[*taille - 1].moyenne);
}

void afficherEtudiants(Etudiant *etudiants, int taille) {
    printf("Liste des étudiants :\n");
    for (int i = 0; i < taille; i++) {
        printf("%s, %d ans, Moyenne : %.2f\n", etudiants[i].nom, etudiants[i].age, etudiants[i].moyenne);
    }
}

void rechercherEtudiant(Etudiant *etudiants, int taille) {
    char nomRecherche[50];
    printf("Entrez le nom de l'étudiant à rechercher : ");
    scanf("%s", nomRecherche);
    for (int i = 0; i < taille; i++) {
        if (strcmp(etudiants[i].nom, nomRecherche) == 0) {
            printf("%s, %d ans, Moyenne : %.2f\n", etudiants[i].nom, etudiants[i].age, etudiants[i].moyenne);
            return;
        }
    }
    printf("Étudiant non trouvé.\n");
}

int main() {
    Etudiant *etudiants = NULL;
    int taille = 0;
    int choix;

    do {
        printf("\nMenu :\n");
        printf("1. Ajouter un étudiant\n");
        printf("2. Afficher tous les étudiants\n");
        printf("3. Rechercher un étudiant\n");
        printf("4. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: ajouterEtudiant(&etudiants, &taille); break;
            case 2: afficherEtudiants(etudiants, taille); break;
            case 3: rechercherEtudiant(etudiants, taille); break;
            case 4: printf("Au revoir !\n"); break;
            default: printf("Choix invalide.\n");
        }
    } while (choix != 4);

    free(etudiants);
    return 0;
}
