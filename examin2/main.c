// Énoncé : Implémenter le tri par insertion pour un tableau d'entiers saisi par l'utilisateur.
// Correction :
#include <stdio.h>

void triParInsertion(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    printf("Entrez le nombre d'éléments : ");
    scanf("%d", &n);
    int arr[n];

    printf("Entrez les éléments du tableau : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    triParInsertion(arr, n);

    printf("Tableau trié : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
