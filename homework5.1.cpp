#include <iostream>
using namespace std;
// 37 % 3 == 1 => вариант 1 - площадь круга

int main()
{
    double radius, pi = 3.14; // объявление переменной и параметра pi

    cout << "Enter radius: "; // приглашение для ввода радиуса
    cin >> radius; // ввод радиуса

    double S = pi * radius * radius; // формула рассчёта площади
    cout << "Area: " << S; // вывод площади

    return 0;
}