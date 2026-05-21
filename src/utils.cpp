#include "utils.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

// ф/я создания динамической матрицы
int** createMatrix(int n, int k)
{
    if (n <= 0 || k <= 0)
        return nullptr;
    int** sp = new int* [n];
    for (int i = 0; i < n; i++)
        sp[i] = new int[k];
    return sp;
}

// ф/я заполнения динамичекой матрицы рандомными числами от -100 до 100
void fillMatrix(int n, int k, int** sp)
{
    if (n <= 0 || k <= 0 || !sp)
        return;
    std::srand(time(0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            sp[i][j] = std::rand() % 201 - 100;
        }
    }
}
// ф/я вывода динамической матрицы
void printMatrix(int n, int k, int** matrix)
{
    if (n <= 0 || k <= 0 || !matrix)
        return;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            std::cout << std::setw(5) << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }
}

// ф/я удаления матрицы (чистка памяти)
void deleteMatrix(int n, int** matrix)
{
    if (n <= 0 || !matrix)
        return;
    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}