#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979323846;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Выберите фигуру для вычисления площади:" << endl;
    cout << "1 — Круг" << endl;
    cout << "2 — Прямоугольник" << endl;
    cout << "3 — Треугольник" << endl;
    cout << "Введите номер: ";

    int choice;
    cin >> choice;

    double area = 0.0;

    switch (choice)
    {
    case 1: {
        double r;
        cout << "Введите радиус круга: ";
        cin >> r;
        area = PI * r * r;
        break;
    }
    case 2: {
        double a, b;
        cout << "Введите длину и ширину прямоугольника: ";
        cin >> a >> b;
        area = a * b;
        break;
    }
    case 3: {
        double a, b, c;
        cout << "Введите длины сторон треугольника: ";
        cin >> a >> b >> c;
        double p = (a + b + c) / 2;
        area = sqrt(p * (p - a) * (p - b) * (p - c));
        break;
    }
    default:
        cout << "Ошибка: неизвестный номер фигуры" << endl;
        return 1;
    }

    cout << "Площадь фигуры = " << area << endl;
}