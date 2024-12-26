#include <stdio.h>
// Inclusion d'un fichier utilisateur
#include "custom_header.h"

// custom_header.h contient :
// #define HELLO "Salut depuis custom_header!"

int main() {
    printf("%s\n", HELLO);
    return 0;
}
