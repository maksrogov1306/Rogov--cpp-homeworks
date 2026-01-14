#include <iostream>
using namespace std;

int main()
{
    const int cX = 2, cY = -1, r = 5; // параметры окружности
    int x, y; // объявление переменных для координат

    cout << "Enter X: "; // ввод координат
    cin >> x;
    cout << "Enter Y: ";
    cin >> y;

    // проверка условий
    if ((x - cX) * (x - cX) + (y - cY) * (y - cY) < r * r) {cout << "Point incide the circle";}
    else if ((x - cX) * (x - cX) + (y - cY) * (y - cY) == r * r) {cout << "Point on the circle";}
    else {cout << "Point outcide the circle";}

    return 0;
}