#include <iostream>
using namespace std;
// 37 % 3 == 1 => вариант 1 - среднее значение

int main()
{
	float numOne, numTwo, numThree; // объявление переменных

	cout << "Enter the 1st number: "; // приглашение пользователя для ввода
	cin >> numOne; // ввод числа

	cout << "Enter the 2nd number: "; // аналогично
	cin >> numTwo;

	cout << "Enter the 3rd number: "; // аналогично
	cin >> numThree;

	float average = (numOne + numTwo + numThree) / 3; // рассчёт среднего
	cout << "Average: " << average; // вывод среднего на экран

	return 0;
}