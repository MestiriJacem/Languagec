// �nonc� : Cr�er une calculatrice qui prend deux nombres et un op�rateur (+, -, *, /) comme entr�e. Utiliser des fonctions pour chaque op�ration et des pointeurs pour passer les r�sultats.
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
        printf("Erreur : Division par z�ro !\n");
    }
}

int main() {
    float a, b, result = 0;
    char op;
    printf("Entrez deux nombres et un op�rateur (+, -, *, /) : ");
    scanf("%f %f %c", &a, &b, &op);

    switch (op) {
        case '+': addition(a, b, &result); break;
        case '-': soustraction(a, b, &result); break;
        case '*': multiplication(a, b, &result); break;
        case '/': division(a, b, &result); break;
        default: printf("Op�rateur invalide\n"); return 1;
    }

    printf("R�sultat : %.2f\n", result);
    return 0;
}
