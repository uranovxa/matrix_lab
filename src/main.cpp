#include <iostream>
#include "utils.h"
#include "matrix_math.h"


// класс-проверка через 2 поля (по стандарту)
class SortedChecker {
private:
    int* sp;
    int lenght;
public:
    SortedChecker(int* arr, int sz) : sp(arr), lenght(sz) {}

    bool result() {
        for (int i = 0; i < lenght - 1; i++) {
            if (sp[i] < sp[i + 1]) {
                return false;
            }
        }
        return true;
    }
};


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
        SortedChecker temp(new_matrix[i], n);
        if (temp.result())
            kol++;
    }
    std::cout << kol << std::endl;

    deleteMatrix(n, matrix);
    deleteMatrix(m, new_matrix);

    return 0;
}