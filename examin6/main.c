// Énoncé : Écrire un programme où l'utilisateur doit deviner un nombre choisi aléatoirement par l'ordinateur entre 1 et 100.
// L'ordinateur donne des indices ("plus grand" ou "plus petit") jusqu'à ce que l'utilisateur trouve le bon nombre.
// Correction :
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nombreMystere, nombreUtilisateur;
    srand(time(NULL));
    nombreMystere = rand() % 100 + 1; // Génère un nombre entre 1 et 100

    printf("Bienvenue dans le jeu de devinette !\n");
    printf("J'ai choisi un nombre entre 1 et 100. À vous de le deviner !\n");

    do {
        printf("Entrez un nombre : ");
        scanf("%d", &nombreUtilisateur);

        if (nombreUtilisateur < nombreMystere) {
            printf("C'est plus grand !\n");
        } else if (nombreUtilisateur > nombreMystere) {
            printf("C'est plus petit !\n");
        } else {
            printf("Bravo ! Vous avez trouvé le nombre mystère : %d\n", nombreMystere);
        }
    } while (nombreUtilisateur != nombreMystere);

    return 0;
}
