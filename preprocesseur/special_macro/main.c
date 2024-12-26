#include <stdio.h>

// Macros spéciales du préprocesseur
int main() {
    printf("Fichier: %s\n", __FILE__);
    printf("Ligne: %d\n", __LINE__);
    printf("Date: %s\n", __DATE__);
    printf("Heure: %s\n", __TIME__);
    return 0;
}
