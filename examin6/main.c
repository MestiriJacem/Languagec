// �nonc� : �crire un programme o� l'utilisateur doit deviner un nombre choisi al�atoirement par l'ordinateur entre 1 et 100.
// L'ordinateur donne des indices ("plus grand" ou "plus petit") jusqu'� ce que l'utilisateur trouve le bon nombre.
// Correction :
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nombreMystere, nombreUtilisateur;
    srand(time(NULL));
    nombreMystere = rand() % 100 + 1; // G�n�re un nombre entre 1 et 100

    printf("Bienvenue dans le jeu de devinette !\n");
    printf("J'ai choisi un nombre entre 1 et 100. � vous de le deviner !\n");

    do {
        printf("Entrez un nombre : ");
        scanf("%d", &nombreUtilisateur);

        if (nombreUtilisateur < nombreMystere) {
            printf("C'est plus grand !\n");
        } else if (nombreUtilisateur > nombreMystere) {
            printf("C'est plus petit !\n");
        } else {
            printf("Bravo ! Vous avez trouv� le nombre myst�re : %d\n", nombreMystere);
        }
    } while (nombreUtilisateur != nombreMystere);

    return 0;
}
