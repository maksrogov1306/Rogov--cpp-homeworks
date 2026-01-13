#include <iostream>
#include <string>
using namespace std;
// 37 % 3 == 1 => вариант 1 - длина строки

int main()
{
    string anyStr; // объявление переменной

    cout << "Enter string: "; // ввод строки
    cin >> anyStr;

    cout << "Length: " << anyStr.length(); // вывод длины строки

    return 0;
}