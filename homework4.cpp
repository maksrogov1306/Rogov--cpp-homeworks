#include <iostream>
using namespace std;
// 37 % 2 == 1 => вариант 1 - символ и его код

int main()
{
	char sym; // объявление переменной
	cout << "Enter symbol: "; // приглашение для ввода
	cin >> sym; // ввод

	cout << "Symbol:" << sym << endl; // вывод символа
	cout << "Code:" << static_cast<int>(sym) << endl; // вывод ASCII символа
	cout << "Code of next symbol:" << static_cast<int>(sym + 1) << endl; // вывод ASCII след символа
	cout << "Next symbol:" << static_cast<char>(sym + 1); // вывод след символа

	return 0;
}