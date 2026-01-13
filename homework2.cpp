#include <iostream>
using namespace std;

int main()
{
	string userName; // объявление переменной

	cout << "Enter your name:"; // приглашение пользователя
	cin >> userName; //ввод имени
	cout << "Hello, " << userName; // вывод приветствия

	return 0;
}