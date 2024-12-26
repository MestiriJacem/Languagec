/*
 * Cours de Programmation Multithread en C
 *
 * Les threads permettent l'ex�cution parall�le de t�ches au sein d'un m�me programme.
 * En C, la biblioth�que `pthread` est utilis�e pour cr�er et g�rer les threads.
 *
 * Avant de compiler, assurez-vous que `pthread` est bien install� sur votre syst�me.
 * Pour Linux : utilisez la commande suivante pour compiler :
 * gcc multithread_cours.c -o multithread_cours -lpthread
 *
 * --- Concepts couverts ---
 * 1. Cr�ation de threads
 * 2. Synchronisation basique avec `pthread_join`
 * 3. Utilisation de variables partag�es
 */

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

// Fonction ex�cut�e par chaque thread
void* afficherMessage(void* arg) {
    /*
     * `arg` est un pointeur pass� lors de la cr�ation du thread.
     * Ici, il pointe vers un entier que nous convertissons avant utilisation.
     */
    int numero = *(int*)arg;
    printf("Bonjour depuis le thread num�ro %d !\n", numero);

    // Terminer proprement le thread
    pthread_exit(NULL);
}

int main() {
    /*
     * Nombre de threads � cr�er
     * Vous pouvez modifier ce nombre pour exp�rimenter.
     */
    const int nombreDeThreads = 5;
    pthread_t threads[nombreDeThreads]; // Tableau pour stocker les threads
    int numeros[nombreDeThreads];       // Variables pour passer aux threads

    printf("D�monstration de la programmation multithread en C.\n");

    /*
     * 1. Cr�ation des threads
     * La fonction `pthread_create` prend :
     * - Un pointeur vers un thread
     * - Des attributs (NULL pour les attributs par d�faut)
     * - Une fonction � ex�cuter
     * - Les arguments � passer � cette fonction
     */
    for (int i = 0; i < nombreDeThreads; i++) {
        numeros[i] = i + 1; // Num�rotation des threads � partir de 1
        if (pthread_create(&threads[i], NULL, afficherMessage, &numeros[i]) != 0) {
            perror("Erreur lors de la cr�ation du thread");
            exit(EXIT_FAILURE);
        }
    }

    /*
     * 2. Attente de la fin des threads
     * La fonction `pthread_join` permet au thread principal d'attendre
     * la terminaison de chaque thread cr��.
     */
    for (int i = 0; i < nombreDeThreads; i++) {
        if (pthread_join(threads[i], NULL) != 0) {
            perror("Erreur lors de l'attente du thread");
            exit(EXIT_FAILURE);
        }
    }

    printf("Tous les threads ont termin� leur ex�cution.\n");

    /*
     * 3. Notes importantes :
     * - Le partage de variables entre threads doit �tre g�r� avec soin pour �viter
     *   les conflits (voir les sections sur les mutex pour synchronisation avanc�e).
     * - Toujours lib�rer les ressources apr�s utilisation.
     */

    return 0;
}
