#include "matrix_math.h"

void transport_matrix(int n, int k, int** matrix, int** new_matrix)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            new_matrix[j][i] = matrix[i][j];
        }
    }
}

void rotateMatrixClockwise(int n, int k, int** matrix, int** new_matrix)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            new_matrix[j][i] = matrix[n - i - 1][j];
        }
    }
}

void rotateMatrixCounterClockwise(int n, int k, int** matrix, int** new_matrix)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            new_matrix[j][i] = matrix[i][k - j - 1];
        }
    }
}