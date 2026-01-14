#include <iostream>
using namespace std;
// 37 % 3 == 1 => вариант 1 - doubleArray

void doubleArray(int arr[], int size) // объявление функции
{
    for (int i = 0; i < size; i++) // перебор каждого элемента массива
    {
        arr[i] *= 2; // умножение на два
    }
}

int main() {
    const int size = 5; // объявление размера массива как константы
    int arr[size]; // объявление массива

    cout << "Enter " << size << " elements of array:\n"; // приглашение для ввода элементов массива
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i]; // цикл для заполнения массива
    }

    cout << "Array:\n"; // объявление вывода массива
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; // вывод каждого элемента
    }
    cout << endl;

    doubleArray(arr, size); // обращение к функции doubleArray

    cout << "Doubled array:\n"; // объявление вывода удвоенного массива
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; // вывод каждого элемента
    }

    return 0;
}