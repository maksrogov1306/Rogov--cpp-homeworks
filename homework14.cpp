#include <iostream>
#include <string>
using namespace std;

int main()
{
    string arr[100]; // объявление массива строк (100 строк - максимум)
    
    int arrLength;
    cout << "Enter amount of strings in array: "; // ввод количества строк в массиве
    cin >> arrLength;

    cout << "Enter " << arrLength << " strings:" << endl; // заполнение массива строками
    for (int i = 0; i < arrLength; i++) {cin >> arr[i];}

    bool flicker = true, arrFlicker[100]; // объявление переменной и формируемого массива

    for (int i = 0; i < arrLength; i++) // пробег по каждой строке массива
    {
        if (arr[i] == "flick") {flicker = !flicker;} // если есть совпадение с ключевым словом,
                                                     // инверт переменной
        arrFlicker[i] = flicker; // формирование массива
    }

    cout << "Bool array: ["; // вывод массива
    for (int i = 0; i < arrLength; i++)
    {
        if (arrFlicker[i]) {cout << "true";}
        else {cout << "false";}
        if (i+1 < arrLength) {cout << ", ";} // разделитель между всеми элементами, кроме последнего
    }
    cout << "]";

    return 0;
}