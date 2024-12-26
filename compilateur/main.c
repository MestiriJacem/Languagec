/*
 * Introduction au Compilateur C et au Langage C
 *
 * Le compilateur C transforme le code source écrit en langage C
 * (par exemple ce fichier .c) en un fichier exécutable que l'ordinateur peut comprendre.
 *
 * Étapes principales :
 * 1. Préprocesseur : Traite les directives (#include, #define, etc.).
 * 2. Compilation : Convertit le code en langage intermédiaire (assembleur).
 * 3. Assemblage : Transforme le code assembleur en code objet (.o).
 * 4. Édition de liens : Combine les fichiers objets pour créer un exécutable.
 *
 * L'IDE Code::Blocks intègre tout cela pour simplifier le développement.
 *
 * --- Exemples de concepts basiques ---
 */

#include <stdio.h>  // Inclusion de la bibliothèque standard pour les entrées/sorties

// Fonction principale - point d'entrée de tout programme C
int main() {
    /*
     * 1. Affichage de texte
     * printf() est utilisé pour afficher du texte à l'écran.
     * Voici un exemple simple :
     */
    printf("Bienvenue dans le cours de programmation en C avec un compilateur !\n");

    /*
     * 2. Variables et types de données
     * En C, nous devons déclarer le type des variables avant de les utiliser.
     * Voici des exemples de types courants :
     */
    int entier = 10;             // Variable entière
    float decimal = 5.5;         // Nombre à virgule flottante
    char caractere = 'A';        // Caractère unique
    char chaine[] = "Bonjour";   // Tableau de caractères (chaîne de texte)

    // Affichage des variables
    printf("Entier: %d\n", entier);
    printf("Décimal: %.2f\n", decimal);
    printf("Caractère: %c\n", caractere);
    printf("Chaîne: %s\n", chaine);

    /*
     * 3. Conditions
     * Les structures conditionnelles permettent d'exécuter du code selon des critères.
     */
    if (entier > 5) {
        printf("L'entier est supérieur à 5.\n");
    } else {
        printf("L'entier est inférieur ou égal à 5.\n");
    }

    /*
     * 4. Boucles
     * Les boucles permettent d'exécuter une portion de code plusieurs fois.
     * Exemple : boucle for pour compter de 1 à 5.
     */
    for (int i = 1; i <= 5; i++) {
        printf("Compteur : %d\n", i);
    }

    /*
     * 5. Fonctions
     * Le code peut être organisé en fonctions pour être réutilisable.
     * Voir l'exemple de fonction ci-dessous.
     */
    afficherMessage();

    /*
     * 6. Compilation et exécution
     * a. Pour compiler ce fichier, cliquez sur "Build" dans Code::Blocks.
     * b. Ensuite, cliquez sur "Run" pour exécuter l'exécutable généré.
     */

    return 0; // Indique que le programme s'est terminé correctement
}

/*
 * Exemple de fonction
 * Cette fonction ne retourne rien (void) et affiche un message.
 */
void afficherMessage() {
    printf("Cette fonction est appelée depuis main().\n");
}

/*
 * --- Concepts avancés ---
 * Une fois à l'aise avec les bases, explorez :
 * - Les pointeurs
 * - La gestion dynamique de mémoire (malloc, free)
 * - Les structures
 * - Les fichiers (lecture/écriture)
 */
