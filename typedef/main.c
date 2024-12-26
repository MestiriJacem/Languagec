// ======================================================
// Projet 2 : La Red�finition des Types en C
// ======================================================

// Fichier : typedef.c

#include <stdio.h>

// En C, la red�finition des types est effectu�e avec le mot-cl� `typedef`.
// Elle permet de cr�er des alias pour des types de donn�es existants afin
// d'am�liorer la lisibilit� et la maintenabilit� du code.

// Red�finition d'un type entier
typedef int Entier;

// Red�finition d'une structure pour une personne
typedef struct {
    char nom[50];
    int age;
} Personne;

int main() {
    // Utilisation du type red�fini Entier
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
