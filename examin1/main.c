// Énoncé : Créer une calculatrice qui prend deux nombres et un opérateur (+, -, *, /) comme entrée. Utiliser des fonctions pour chaque opération et des pointeurs pour passer les résultats.
// Correction :
#include <stdio.h>

void addition(float a, float b, float *result) {
    *result = a + b;
}

void soustraction(float a, float b, float *result) {
    *result = a - b;
}

void multiplication(float a, float b, float *result) {
    *result = a * b;
}

void division(float a, float b, float *result) {
    if (b != 0) {
        *result = a / b;
    } else {
        printf("Erreur : Division par zéro !\n");
    }
}

int main() {
    float a, b, result = 0;
    char op;
    printf("Entrez deux nombres et un opérateur (+, -, *, /) : ");
    scanf("%f %f %c", &a, &b, &op);

    switch (op) {
        case '+': addition(a, b, &result); break;
        case '-': soustraction(a, b, &result); break;
        case '*': multiplication(a, b, &result); break;
        case '/': division(a, b, &result); break;
        default: printf("Opérateur invalide\n"); return 1;
    }

    printf("Résultat : %.2f\n", result);
    return 0;
}
