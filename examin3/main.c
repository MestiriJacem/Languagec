// �nonc� : �crire un programme qui v�rifie si un nombre donn� est un nombre parfait. Un nombre parfait est �gal � la somme de ses diviseurs propres (excluant lui-m�me).
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

