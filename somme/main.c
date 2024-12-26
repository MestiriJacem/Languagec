#include <stdio.h>
#include <stdlib.h>


int main() {
    int a, b, somme;
    printf("Entrez deux nombres : ");
    scanf("%d %d", &a, &b);
    somme = a + b;
    printf("La somme est : %d\n", somme);
    return 0;
}
