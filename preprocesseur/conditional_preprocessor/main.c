#include <stdio.h>

// #define peut �tre utilis� avec des conditions
#define DEBUG 1

int main() {
    #ifdef DEBUG
        printf("Mode d�bogage activ�!\n");
    #endif

    #ifndef RELEASE
        printf("Mode release d�sactiv�!\n");
    #endif

    #if DEBUG == 1
        printf("D�bogage: Niveau 1\n");
    #else
        printf("D�bogage: Niveau inconnu\n");
    #endif

    return 0;
}
