#include <iostream>
using namespace std;
// 37 % 5 == 2 => вариант 2 - поиск индекса первого вхождения

int main()
{
    int arr[100], arrLength, x; // объявление переменных - пустой массив (до 100 элементов), длина массива, число для поиска

    cout << "Enter amount of numbers in array: "; // ввод размера массива
    cin >> arrLength;

    cout << "Enter elements:\n"; // заполнение массива
    for (int i = 0; i < arrLength; i++) 
    {
        cin >> arr[i];
    }

    cout << "Enter X: "; // ввод числа для поиска
    cin >> x;

    for (int i = 0; i < arrLength; i++) // цикл для поиска числа в массиве
    {
        if (arr[i] == x) // проверка на соответствие
        {
            cout << "First appearance index: " << i; // вывод индекса
            break; // выход из цикла при нахождении индекса первого вхождения
        }
        if (i + 1 == arrLength) {cout << "Not found";} // если при проверке последнего значения число не найдено
    }

    return 0;
}