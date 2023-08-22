#include <stdio.h>

#define ROWS1 3
#define COLS1 3
#define ROWS2 3
#define COLS2 3

void matrixMultiplication(int mat1[][COLS1], int mat2[][COLS2], int result[][COLS2]) {
    for (int i = 0; i < ROWS1; ++i) {
        for (int j = 0; j < COLS2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < COLS1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void printMatrix(int mat[][COLS2], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[ROWS1][COLS1] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int mat2[ROWS2][COLS2] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int result[ROWS1][COLS2];

    matrixMultiplication(mat1, mat2, result);

    printf("Matrix 1:\n");
    printMatrix(mat1, ROWS1, COLS1);

    printf("\nMatrix 2:\n");
    printMatrix(mat2, ROWS2, COLS2);

    printf("\nResulting Matrix:\n");
    printMatrix(result, ROWS1, COLS2);

    return 0;
}

