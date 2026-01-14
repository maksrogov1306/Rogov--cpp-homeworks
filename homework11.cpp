#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int romanToDec(string roman) // объявление функции, с помощью которой будет производиться рассчёт
{
    unordered_map<char, int> romanNumbers = // соответствие римских цифр char и десятичных int
    {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int result = 0, romanLength = roman.length(); // объявление переменных для формирования суммы
                                                  // и хранения длины строки из римских цифр
    for (int i = 0; i < romanLength; i++)
    {
        if (i + 1 < romanLength &&                       // описание случая, при котором
            (romanNumbers[roman[i]] < romanNumbers[roman[i + 1]])) // меньшее значение стоит перед большим
        {
            result -= romanNumbers[roman[i]];  // в этом случае применяется вычитание
        }
        else
        {
            result += romanNumbers[roman[i]]; // в ином случае - сложение
        }
    }

    return result; 
}

int main()
{
    string romanNumString; // объявление переменной

    cout << "Enter roman number: "; // ввод исходного римского числа
    cin >> romanNumString;

    cout << "Classic number: " << romanToDec(romanNumString); // вывод десятичного числа

    return 0;
}