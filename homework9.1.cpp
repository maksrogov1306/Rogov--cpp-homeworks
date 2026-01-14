#include <iostream>
using namespace std;
// 37 % 3 == 1 => вариант 1 - sumOfThree

int sumOfThree(int a, int b, int c) // объявление функции
{
    return a + b + c;               // возвращающей сумму чисел
}

int main()
{
    int a, b, c; // объявление переменных

    cout << "Enter 3 numbers: "; // ввод трёх чисел
    cin >> a >> b >> c;

    cout << "Sum of numbers: " << sumOfThree(a, b, c); // обращение к функции, вывод

    return 0;
}