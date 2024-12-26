/*
 * Introduction au Compilateur C et au Langage C
 *
 * Le compilateur C transforme le code source �crit en langage C
 * (par exemple ce fichier .c) en un fichier ex�cutable que l'ordinateur peut comprendre.
 *
 * �tapes principales :
 * 1. Pr�processeur : Traite les directives (#include, #define, etc.).
 * 2. Compilation : Convertit le code en langage interm�diaire (assembleur).
 * 3. Assemblage : Transforme le code assembleur en code objet (.o).
 * 4. �dition de liens : Combine les fichiers objets pour cr�er un ex�cutable.
 *
 * L'IDE Code::Blocks int�gre tout cela pour simplifier le d�veloppement.
 *
 * --- Exemples de concepts basiques ---
 */

#include <stdio.h>  // Inclusion de la biblioth�que standard pour les entr�es/sorties

// Fonction principale - point d'entr�e de tout programme C
int main() {
    /*
     * 1. Affichage de texte
     * printf() est utilis� pour afficher du texte � l'�cran.
     * Voici un exemple simple :
     */
    printf("Bienvenue dans le cours de programmation en C avec un compilateur !\n");

    /*
     * 2. Variables et types de donn�es
     * En C, nous devons d�clarer le type des variables avant de les utiliser.
     * Voici des exemples de types courants :
     */
    int entier = 10;             // Variable enti�re
    float decimal = 5.5;         // Nombre � virgule flottante
    char caractere = 'A';        // Caract�re unique
    char chaine[] = "Bonjour";   // Tableau de caract�res (cha�ne de texte)

    // Affichage des variables
    printf("Entier: %d\n", entier);
    printf("D�cimal: %.2f\n", decimal);
    printf("Caract�re: %c\n", caractere);
    printf("Cha�ne: %s\n", chaine);

    /*
     * 3. Conditions
     * Les structures conditionnelles permettent d'ex�cuter du code selon des crit�res.
     */
    if (entier > 5) {
        printf("L'entier est sup�rieur � 5.\n");
    } else {
        printf("L'entier est inf�rieur ou �gal � 5.\n");
    }

    /*
     * 4. Boucles
     * Les boucles permettent d'ex�cuter une portion de code plusieurs fois.
     * Exemple : boucle for pour compter de 1 � 5.
     */
    for (int i = 1; i <= 5; i++) {
        printf("Compteur : %d\n", i);
    }

    /*
     * 5. Fonctions
     * Le code peut �tre organis� en fonctions pour �tre r�utilisable.
     * Voir l'exemple de fonction ci-dessous.
     */
    afficherMessage();

    /*
     * 6. Compilation et ex�cution
     * a. Pour compiler ce fichier, cliquez sur "Build" dans Code::Blocks.
     * b. Ensuite, cliquez sur "Run" pour ex�cuter l'ex�cutable g�n�r�.
     */

    return 0; // Indique que le programme s'est termin� correctement
}

/*
 * Exemple de fonction
 * Cette fonction ne retourne rien (void) et affiche un message.
 */
void afficherMessage() {
    printf("Cette fonction est appel�e depuis main().\n");
}

/*
 * --- Concepts avanc�s ---
 * Une fois � l'aise avec les bases, explorez :
 * - Les pointeurs
 * - La gestion dynamique de m�moire (malloc, free)
 * - Les structures
 * - Les fichiers (lecture/�criture)
 */
