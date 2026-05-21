#include <iostream>
#include "utils.h"
#include "matrix_math.h"


// класс, проверяющий отсортирован ли массив по убыванию через 1 поле
class SortedChecker {
private:
    bool flag;
public:
    SortedChecker(int* sp, int sz) {
        flag = true;
        for (int i = 0; i < sz - 1; i++) {
            if (sp[i] < sp[i + 1]) {
                flag = false;
                break;
            }
        }
    }
    bool result() { return flag; }
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