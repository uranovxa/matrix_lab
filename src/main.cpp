#include <iostream>
#include "utils.h"
#include "matrix_math.h"

int main()
{
    int n, m;
    std::cin >> n >> m;

    int** matrix = createMatrix(n, m);
    fillMatrix(n, m, matrix);
    printMatrix(n, m, matrix);
    std::cout << std::endl;

    int** new_matrix = createMatrix(m, n);
    transport_matrix(n, m, matrix, new_matrix);
    printMatrix(m, n, new_matrix);

    int kol = 0;
    std::cout << "Проверяем строки транспонированной матрицы:\n";
    for (int i = 0; i < m; i++) {
        // класс SortedChecker будет позже
        kol++;
    }
    std::cout << kol << std::endl;

    deleteMatrix(n, matrix);
    deleteMatrix(m, new_matrix);

    return 0;
}