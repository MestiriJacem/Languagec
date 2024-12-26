// ======================================================
// Projet 2 : La Redéfinition des Types en C
// ======================================================

// Fichier : typedef.c

#include <stdio.h>

// En C, la redéfinition des types est effectuée avec le mot-clé `typedef`.
// Elle permet de créer des alias pour des types de données existants afin
// d'améliorer la lisibilité et la maintenabilité du code.

// Redéfinition d'un type entier
typedef int Entier;

// Redéfinition d'une structure pour une personne
typedef struct {
    char nom[50];
    int age;
} Personne;

int main() {
    // Utilisation du type redéfini Entier
    Entier a = 10, b = 20;
    Entier somme = a + b;
    printf("Somme de %d et %d = %d\n", a, b, somme);

    // Utilisation de la structure Personne
    Personne p1;
    printf("Entrez le nom de la personne : ");
    scanf("%s", p1.nom);
    printf("Entrez l'\u00e2ge de la personne : ");
    scanf("%d", &p1.age);

    printf("Personne : %s, \u00c2ge : %d\n", p1.nom, p1.age);

    return 0;
}
