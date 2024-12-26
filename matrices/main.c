// Énoncé : Écrire un programme qui multiplie deux matrices saisies par l'utilisateur.
// Correction :
#include <stdio.h>

void lireMatrice(int mat[10][10], int ligne, int colonne) {
    for (int i = 0; i < ligne; i++) {
        for (int j = 0; j < colonne; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void afficherMatrice(int mat[10][10], int ligne, int colonne) {
    for (int i = 0; i < ligne; i++) {
        for (int j = 0; j < colonne; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void multiplierMatrices(int mat1[10][10], int mat2[10][10], int res[10][10], int l1, int c1, int c2) {
    for (int i = 0; i < l1; i++) {
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[10][10], mat2[10][10], res[10][10];
    int l1, c1, l2, c2;

    printf("Entrez les dimensions de la première matrice (lignes colonnes) : ");
    scanf("%d %d", &l1, &c1);
    printf("Entrez les dimensions de la deuxième matrice (lignes colonnes) : ");
    scanf("%d %d", &l2, &c2);

    if (c1 != l2) {
        printf("Multiplication impossible : le nombre de colonnes de la première matrice doit être égal au nombre de lignes de la deuxième.\n");
        return 1;
    }

    printf("Entrez les éléments de la première matrice :\n");
    lireMatrice(mat1, l1, c1);

    printf("Entrez les éléments de la deuxième matrice :\n");
    lireMatrice(mat2, l2, c2);

    multiplierMatrices(mat1, mat2, res, l1, c1, c2);

    printf("Résultat de la multiplication :\n");
    afficherMatrice(res, l1, c2);

    return 0;
}
