#include <iostream>
#include <string>
using namespace std;

int main()
{
    string anyStr; // объявление переменной для строки

    cout << "Enter string: ";
    getline(cin, anyStr); // ввод строки

    bool flag = true; // метка для досрочного выхода из цикла

    for (int i = 0; i < anyStr.length(); i++)
    {
        if (anyStr[i] == ' ') continue; // проверка на пробел

        for (int j = i + 1; j < anyStr.length(); j++)
        {
            if (anyStr[j] == ' ') continue; // проверка на пробел

            if (anyStr[i] == anyStr[j]) // если два символа в строке совпадают
            {
                flag = false; // создание условия досрочного выхода из цикла
                cout << "false"; // вывод на экран отрицательного результата
                break;
            }
        }

        if (flag == false) break; // проверка условия досрочного выхода из цикла
    }

    if (flag) cout << "true"; // вывод положительного результата

    return 0;
}