
#include <stdio.h>

// #undef annule une d�finition pr�c�dente
#define TEMP 25

int main() {
    printf("Valeur de TEMP : %d\n", TEMP);

    // Annuler la d�finition
    #undef TEMP
    #define TEMP 30

    printf("Nouvelle valeur de TEMP : %d\n", TEMP);
    return 0;
}
