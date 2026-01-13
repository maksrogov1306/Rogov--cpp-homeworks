#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// 37 % 3 == 1 => вариант 1 - сумма элементов

int main()
{
    srand(time(NULL)); // объявление генератора случайных чисел на основе времени
    int array[5], arraySum = 0, count = 0; // объявление переменных - массива, суммы его элементов, счётчика для цикла

    cout << "Array:\n"; // объявление вывода элементов массива

    for (count; count < 5; count++) // цикл для заполнения массива и вывода элементов
    {
        array[count] = rand(); // генерация и заполение ячейки
        cout << array[count] << " "; // вывод элемента с разделителем пробелом
        arraySum += array[count]; // формирование суммы элементов
    }

    cout << "\nSum: " << arraySum; // вывод итоговой суммы

    return 0;
}