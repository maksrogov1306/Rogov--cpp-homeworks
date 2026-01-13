#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// 37 % 3 == 1 => вариант 1 - элементы главной диагонали массива

int main()
{
    const int rows = 2, columns = 2; // параметры матрицы
    int matrix[rows][columns], i = 0, j = 0; // объявление матрицы 2x2, счётчиков для цикла
    srand(time(NULL)); // объявление генератора

    cout << "Array:\n"; // объявление вывода элементов массива
    // цикл для заполнения массива и вывода значений элементов
    for (int i = 0; i < rows; ++i) // номер строки
    {
        for (int j = 0; j < columns; ++j) // номер столбца
        {
            matrix[i][j] = rand() % 100; // заполнение ячейки случайным значением (в пределах 100)
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Main diagonal:\n"; // объявление вывода главной диагонали
    // цикл для вывода значений главной диагонали
    for (int i = 0; i < rows; ++i) // номер строки и столбца совпадает
    {
        cout << matrix[i][i] << " ";
    }

    return 0;
}