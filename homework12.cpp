#include <iostream>
#include <string>
using namespace std;
// 37 % 3 == 1 => вариант 1 - класс Student

// Задание 1. Создание базового класса

class Student // объявление класса
{
private: // приватные поля по условию
    string name;
    int age;
    double score;

public:
    Student(): name(""), age(0), score(0.0) {} // конструктор по умолчанию

    Student(string n, int a, double s): name(n), age(a), score(s) {} // с параметрами инициализации полей

    string getName() const {return name;} // геттер для name
    void setName(string n) {name = n;} // сеттер

    int getAge() const {return age;} // геттер для age
    void setAge(int a) {age = a;} // сеттер

    double getScore() const {return score;} // геттер для score
    void setScore(double s) {score = s;} // сеттер

    void show1() const // метод, выводящий информацию
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Avg score: " << score << endl;
    }

    // Задание 2. Расширение функциональности класса

    bool isAdult() const 
    {
        return age >= 18; // метод, вовращающий признак совершеннолетия, условие >= 18
    }

    void show2() const // объявление метода show2()
    {
        show1();
        if (isAdult()) cout << "Adult: yes"; // вывод данных о совершеннолетии
        else cout << "Adult: no";
    }

    // Задание 3. Расширение функциональности класса

    void updateScore(double delta) // объявление метода для изменения среднего балла
    {
        score += delta;
    }
};

int main()
{
    string name; // объявление переменных для класса
    int age;
    double score, delta; 

    cout << "Enter name: "; // ввод имени
    getline(cin, name);

    cout << "Enter age: "; // ввод возраста
    cin >> age;

    cout << "Enter avg score: "; // ввод среднего балла
    cin >> score;

    Student testStudent(name, age, score); // формирование объекта

    cout << "\nStudent's info" << endl;
    testStudent.show1(); // вывод данных для здания 1

    cout << "\nStudent's info (task 2)" << endl;
    testStudent.show2(); // вывод данных для задания 2

    cout << "\n\nEnter avg score change: "; // ввод изменения балла
    cin >> delta;
    testStudent.updateScore(delta); // применение метода для изменения

    cout << "\nUpdated student's info (task 3)" << endl;
    testStudent.show2();

    return 0;
}