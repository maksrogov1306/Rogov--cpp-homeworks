#include <iostream>
using namespace std;
// 37 % 3 == 1 => вариант 1 - sumToN

int sumToN(int n) // объявление функции
{
    if (n <= 0) // условие остановки рекурсии
    {
        return 0;
    }
    return n + sumToN(n - 1); // формирование суммы через рекурсию
}

int main()
{
    int n;   // объявление перменной

    cout << "Enter N: ";
    cin >> n;            // ввод переменной

    cout << "Sum to N: " << sumToN(n); // вывод значения функции

    return 0;
}