#include <stdio.h>

// Une macro peut accepter des arguments.
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int num = 5;
    printf("Carré de %d : %d\n", num, SQUARE(num));
    printf("Max de 10 et 20 : %d\n", MAX(10, 20));
    return 0;
}
