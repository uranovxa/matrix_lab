#include "matrix_math.h"

// ф/я транспонирования матрицы
void transport_matrix(int n, int k, int** matrix, int** new_matrix)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            new_matrix[j][i] = matrix[i][j];
        }
    }
}

// ф/я поворота матрицы на 90 градусов по часовой
void rotateMatrixClockwise(int n, int k, int** matrix, int** new_matrix)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            new_matrix[j][i] = matrix[n - i - 1][j];
        }
    }
}

// ф/я поворота матрицы против часовой на 90 градусов
void rotateMatrixCounterClockwise(int n, int k, int** matrix, int** new_matrix)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            new_matrix[j][i] = matrix[i][k - j - 1];
        }
    }
}