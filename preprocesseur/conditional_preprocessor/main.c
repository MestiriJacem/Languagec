#include <stdio.h>

// #define peut être utilisé avec des conditions
#define DEBUG 1

int main() {
    #ifdef DEBUG
        printf("Mode débogage activé!\n");
    #endif

    #ifndef RELEASE
        printf("Mode release désactivé!\n");
    #endif

    #if DEBUG == 1
        printf("Débogage: Niveau 1\n");
    #else
        printf("Débogage: Niveau inconnu\n");
    #endif

    return 0;
}
