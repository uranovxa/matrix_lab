#ifndef MATRIX_MATH_H
#define MATRIX_MATH_H

void transport_matrix(int n, int k, int** matrix, int** new_matrix);
void rotateMatrixClockwise(int n, int k, int** matrix, int** new_matrix);
void rotateMatrixCounterClockwise(int n, int k, int** matrix, int** new_matrix);

#endif