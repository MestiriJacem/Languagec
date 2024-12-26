// Énoncé : Écrire un programme qui vérifie si un nombre donné est un nombre parfait. Un nombre parfait est égal à la somme de ses diviseurs propres (excluant lui-même).
// Correction :
#include <stdio.h>

int estNombreParfait(int n) {
    int somme = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            somme += i;
        }
    }
    return somme == n;
}

int main() {
    int n;
    printf("Entrez un nombre : ");
    scanf("%d", &n);

    if (estNombreParfait(n)) {
        printf("%d est un nombre parfait.\n", n);
    } else {
        printf("%d n'est pas un nombre parfait.\n", n);
    }

    return 0;
}

