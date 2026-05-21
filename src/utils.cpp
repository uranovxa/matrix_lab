#include "utils.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

int** createMatrix(int n, int k)
{
    int** sp = new int* [n];
    for (int i = 0; i < n; i++)
        sp[i] = new int[k];
    return sp;
}

void fillMatrix(int n, int k, int** sp)
{
    std::srand(time(0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            sp[i][j] = std::rand() % 201 - 100;
        }
    }
}

void printMatrix(int n, int k, int** matrix)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            std::cout << std::setw(5) << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }
}

void deleteMatrix(int n, int** matrix)
{
    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}