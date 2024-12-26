// ======================================================
// Projet 6 : Le Préprocesseur en C
// ======================================================

// Fichier : preprocessor.c

#include <stdio.h>

// Introduction au préprocesseur en C
// -----------------------------------
// Le préprocesseur est une étape de compilation où des instructions spéciales
// sont interprétées avant que le code source soit compilé. Ces instructions
// commencent par le symbole `#`.

// Exemple 1 : Macros simples
#define PI 3.14159
#define MESSAGE "Bonjour, Préprocesseur C!"

int main() {
    printf("Valeur de PI : %.5f\n", PI);
    printf("Message : %s\n", MESSAGE);

    return 0;
}

// Exemple 2 : Macros avec arguments
#define CARRE(x) ((x) * (x))

int exemple_carres() {
    int nombre = 5;
    printf("Le carré de %d est : %d\n", nombre, CARRE(nombre));

    return 0;
}

// Exemple 3 : Instructions conditionnelles
#define DEBUG

int exemple_debug() {
    #ifdef DEBUG
        printf("Mode debug activé\n");
    #endif

    #ifndef RELEASE
        printf("Mode release non activé\n");
    #endif

    return 0;
}

// Exemple 4 : Inclusion de fichiers
// Supprimé pour éviter les erreurs
/* #include "mon_header.h" */

int exemple_inclusion() {
    printf("Exemple avec un fichier d'inclusion\n");

    return 0;
}

// Exemple 5 : Undefinition et redéfinition
#undef PI
#define PI 3.14 // Redéfinition de PI

int exemple_redefinition() {
    printf("Nouvelle valeur de PI : %.2f\n", PI);

    return 0;
}

// Exemple 6 : Opérateurs spéciaux
#define STRINGIZE(x) #x
#define CONCATENATE(a, b) a##b

int exemple_operateurs() {
    printf("Stringize exemple : %s\n", STRINGIZE(Hello, World!));

    int xy = 100;
    printf("Concaténation de variables : %d\n", CONCATENATE(x, y));

    return 0;
}

// Les directives du préprocesseur permettent de rendre le code plus flexible
// et maintenable, mais leur utilisation excessive peut rendre le débogage
// plus complexe. Utilisez-les avec parcimonie et clarté !
