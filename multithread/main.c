/*
 * Cours de Programmation Multithread en C
 *
 * Les threads permettent l'exécution parallèle de tâches au sein d'un même programme.
 * En C, la bibliothèque `pthread` est utilisée pour créer et gérer les threads.
 *
 * Avant de compiler, assurez-vous que `pthread` est bien installé sur votre système.
 * Pour Linux : utilisez la commande suivante pour compiler :
 * gcc multithread_cours.c -o multithread_cours -lpthread
 *
 * --- Concepts couverts ---
 * 1. Création de threads
 * 2. Synchronisation basique avec `pthread_join`
 * 3. Utilisation de variables partagées
 */

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

// Fonction exécutée par chaque thread
void* afficherMessage(void* arg) {
    /*
     * `arg` est un pointeur passé lors de la création du thread.
     * Ici, il pointe vers un entier que nous convertissons avant utilisation.
     */
    int numero = *(int*)arg;
    printf("Bonjour depuis le thread numéro %d !\n", numero);

    // Terminer proprement le thread
    pthread_exit(NULL);
}

int main() {
    /*
     * Nombre de threads à créer
     * Vous pouvez modifier ce nombre pour expérimenter.
     */
    const int nombreDeThreads = 5;
    pthread_t threads[nombreDeThreads]; // Tableau pour stocker les threads
    int numeros[nombreDeThreads];       // Variables pour passer aux threads

    printf("Démonstration de la programmation multithread en C.\n");

    /*
     * 1. Création des threads
     * La fonction `pthread_create` prend :
     * - Un pointeur vers un thread
     * - Des attributs (NULL pour les attributs par défaut)
     * - Une fonction à exécuter
     * - Les arguments à passer à cette fonction
     */
    for (int i = 0; i < nombreDeThreads; i++) {
        numeros[i] = i + 1; // Numérotation des threads à partir de 1
        if (pthread_create(&threads[i], NULL, afficherMessage, &numeros[i]) != 0) {
            perror("Erreur lors de la création du thread");
            exit(EXIT_FAILURE);
        }
    }

    /*
     * 2. Attente de la fin des threads
     * La fonction `pthread_join` permet au thread principal d'attendre
     * la terminaison de chaque thread créé.
     */
    for (int i = 0; i < nombreDeThreads; i++) {
        if (pthread_join(threads[i], NULL) != 0) {
            perror("Erreur lors de l'attente du thread");
            exit(EXIT_FAILURE);
        }
    }

    printf("Tous les threads ont terminé leur exécution.\n");

    /*
     * 3. Notes importantes :
     * - Le partage de variables entre threads doit être géré avec soin pour éviter
     *   les conflits (voir les sections sur les mutex pour synchronisation avancée).
     * - Toujours libérer les ressources après utilisation.
     */

    return 0;
}
