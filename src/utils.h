#ifndef UTILS_H
#define UTILS_H

int** createMatrix(int n, int k);
void fillMatrix(int n, int k, int** sp);
void printMatrix(int n, int k, int** matrix);
void deleteMatrix(int n, int** matrix);

#endif