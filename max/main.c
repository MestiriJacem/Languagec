#include <stdio.h>

int main() {
    int n, max;
    printf("Entrez le nombre d'�l�ments : ");
    scanf("%d", &n);

    int tableau[n];
    printf("Entrez les �l�ments : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    max = tableau[0];
    for (int i = 1; i < n; i++) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }

    printf("Le plus grand �l�ment est : %d\n", max);
    return 0;
}
