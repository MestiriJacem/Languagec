// �nonc� : �crire un programme qui g�re une liste d'�tudiants (nom, �ge, note moyenne).
// Permettre � l'utilisateur de :
    // 1. Ajouter un �tudiant.
    // 2. Afficher tous les �tudiants.
    // 3. Rechercher un �tudiant par son nom.
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
        printf("Erreur de m�moire.\n");
        exit(1);
    }
    printf("Entrez le nom : ");
    scanf("%s", (*etudiants)[*taille - 1].nom);
    printf("Entrez l'�ge : ");
    scanf("%d", &(*etudiants)[*taille - 1].age);
    printf("Entrez la moyenne : ");
    scanf("%f", &(*etudiants)[*taille - 1].moyenne);
}

void afficherEtudiants(Etudiant *etudiants, int taille) {
    printf("Liste des �tudiants :\n");
    for (int i = 0; i < taille; i++) {
        printf("%s, %d ans, Moyenne : %.2f\n", etudiants[i].nom, etudiants[i].age, etudiants[i].moyenne);
    }
}

void rechercherEtudiant(Etudiant *etudiants, int taille) {
    char nomRecherche[50];
    printf("Entrez le nom de l'�tudiant � rechercher : ");
    scanf("%s", nomRecherche);
    for (int i = 0; i < taille; i++) {
        if (strcmp(etudiants[i].nom, nomRecherche) == 0) {
            printf("%s, %d ans, Moyenne : %.2f\n", etudiants[i].nom, etudiants[i].age, etudiants[i].moyenne);
            return;
        }
    }
    printf("�tudiant non trouv�.\n");
}

int main() {
    Etudiant *etudiants = NULL;
    int taille = 0;
    int choix;

    do {
        printf("\nMenu :\n");
        printf("1. Ajouter un �tudiant\n");
        printf("2. Afficher tous les �tudiants\n");
        printf("3. Rechercher un �tudiant\n");
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
