#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter amount of elements in array: "; // объявление пользователем количества элементов
    cin >> size;

    int* nums = new int[size]; // объявление массива указанного размера

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++)              // заполнение массива
    {
        cin >> nums[i];
    }

    int target;
    cout << "Enter target: "; // объявление целевого значения пользователем
    cin >> target;

    bool flag = false; // триггер для досрочного выхода из цикла
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++) // перебор всех пар элементов
        {
            if (nums[i] + nums[j] == target)
            {
                cout << "Indexes: " << i << ", " << j; // при нахождении пары, так как заявлено всего одно решение
                flag = true;                // вывод значений и выход из циклов
                break;
            }
        }
        if (flag) break; // проверка условия досрочного завершения циклов
    }
    
    return 0;
}