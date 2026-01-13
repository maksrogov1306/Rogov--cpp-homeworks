#include <iostream>
using namespace std;
// 37 % 3 == 1 => вариант 1 - остаток от деления

int main()
{
	int numOne, numTwo; // объявление переменных

	cout << "Enter the 1st number: "; // приглашение пользователя для ввода
	cin >> numOne; // ввод делимого

	cout << "Enter the 2nd number: "; // аналогично
	cin >> numTwo; // ввод делителя

	int result = numOne % numTwo; // рассчёт остатка от деления
	cout << "Result: " << result; // вывод результата

	return 0;
}