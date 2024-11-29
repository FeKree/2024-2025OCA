#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double a, b, c;
    cout << "Введите сторону a: ";
    cin >> a;
    cout << "Введите сторону b: ";
    cin >> b;
    cout << "Введите сторону c: ";
    cin >> c;
    if ((a + b) > c || (a + c) > b || (c + b) > a)
    {
        if (a == b && a && b != c || a == c && a && c != b || b == c && a != c && b)
        {
            cout << "Треугольник является равнобедренным";
        }
        else if (a == b && b == c && a == c)
        {
            cout << "Треугольник является равносторонним";
        }
        else if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(b, 2) + pow(c, 2) == pow(a, 2) || pow(a, 2) + pow(c, 2) == pow(b, 2))
        {
            cout << "Треугольник является прямоугольным";
        }
        else if (a + b < c || a + c < b || b + c < a)
        {
            cout << "Такого треугольника не существует";
        }
        else
        {
            cout << "Треугольник является разносторонним";
        }
    }
    return 0;
}
