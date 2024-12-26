// ======================================================
// Projet 6 : Le Pr�processeur en C
// ======================================================

// Fichier : preprocessor.c

#include <stdio.h>

// Introduction au pr�processeur en C
// -----------------------------------
// Le pr�processeur est une �tape de compilation o� des instructions sp�ciales
// sont interpr�t�es avant que le code source soit compil�. Ces instructions
// commencent par le symbole `#`.

// Exemple 1 : Macros simples
#define PI 3.14159
#define MESSAGE "Bonjour, Pr�processeur C!"

int main() {
    printf("Valeur de PI : %.5f\n", PI);
    printf("Message : %s\n", MESSAGE);

    return 0;
}

// Exemple 2 : Macros avec arguments
#define CARRE(x) ((x) * (x))

int exemple_carres() {
    int nombre = 5;
    printf("Le carr� de %d est : %d\n", nombre, CARRE(nombre));

    return 0;
}

// Exemple 3 : Instructions conditionnelles
#define DEBUG

int exemple_debug() {
    #ifdef DEBUG
        printf("Mode debug activ�\n");
    #endif

    #ifndef RELEASE
        printf("Mode release non activ�\n");
    #endif

    return 0;
}

// Exemple 4 : Inclusion de fichiers
// Supprim� pour �viter les erreurs
/* #include "mon_header.h" */

int exemple_inclusion() {
    printf("Exemple avec un fichier d'inclusion\n");

    return 0;
}

// Exemple 5 : Undefinition et red�finition
#undef PI
#define PI 3.14 // Red�finition de PI

int exemple_redefinition() {
    printf("Nouvelle valeur de PI : %.2f\n", PI);

    return 0;
}

// Exemple 6 : Op�rateurs sp�ciaux
#define STRINGIZE(x) #x
#define CONCATENATE(a, b) a##b

int exemple_operateurs() {
    printf("Stringize exemple : %s\n", STRINGIZE(Hello, World!));

    int xy = 100;
    printf("Concat�nation de variables : %d\n", CONCATENATE(x, y));

    return 0;
}

// Les directives du pr�processeur permettent de rendre le code plus flexible
// et maintenable, mais leur utilisation excessive peut rendre le d�bogage
// plus complexe. Utilisez-les avec parcimonie et clart� !
