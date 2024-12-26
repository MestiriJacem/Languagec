
#include <stdio.h>

// #undef annule une définition précédente
#define TEMP 25

int main() {
    printf("Valeur de TEMP : %d\n", TEMP);

    // Annuler la définition
    #undef TEMP
    #define TEMP 30

    printf("Nouvelle valeur de TEMP : %d\n", TEMP);
    return 0;
}
