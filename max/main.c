#include <stdio.h>

int main() {
    int n, max;
    printf("Entrez le nombre d'éléments : ");
    scanf("%d", &n);

    int tableau[n];
    printf("Entrez les éléments : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    max = tableau[0];
    for (int i = 1; i < n; i++) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }

    printf("Le plus grand élément est : %d\n", max);
    return 0;
}
