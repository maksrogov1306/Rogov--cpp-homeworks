#include <iostream>
using namespace std;
// 37 % 3 == 1 => вариант 1 - сумма

int main()
{
    int N, count = 1, sum = 0; // объявление переменных - N, счётчик для цикла, формируемая сумма

    cout << "Enter N: "; // ввод числа N
    cin >> N;
    
    for (count; count <= N; count++) // цикл для формирования суммы
    {
        sum += count; // прибавление к текущему значению суммы текущего значения счётчика
    }
    
    cout << "Sum: " << sum; // вывод итоговой суммы

    return 0;
}