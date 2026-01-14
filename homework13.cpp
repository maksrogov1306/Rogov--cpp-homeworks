#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>
using namespace std;

bool correctCheck(const string& s) // объявление функции
{
    unordered_map<char, char> symbols =
    {
        {')', '('}, {']', '['}, {'}', '{'} // формирование хеш-таблицы
    };

    stack<char> stack; // объявление стека

    for (char ch : s) // цикл для прохода по всем символам строки
    {
        if (symbols.count(ch)) // если символ - закрывающая скобка
        {
            if (stack.empty() || stack.top() != symbols[ch]) // проверка  нарушения правильности пары,
            {                                               // в частности, отстутствия нужной открывающей скобки
                return false; // расстановка нарушена
            }
            stack.pop(); // удаление открывающей скобки из стека, если пара образовалась
        }

        else // если символ НЕ закрывающая скобка, значит - открывающая
        {
            stack.push(ch); // символ помещается в стек
        }
    }
    return stack.empty(); // проверка, не осталось ли лишних символов в строке после сборки всех возможных пар
}

int main()
{
    string strForCheck; // объявление переменной

    cout << "Enter string: " << endl; // ввод последовательности скобок
    getline(cin, strForCheck);

    if (correctCheck(strForCheck)) cout << "True" << endl; // применение функции для проверки
    else cout << "False" << endl;

    return 0;
}