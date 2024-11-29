#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double z1, z2, b, pi = 3.1415926;
    cout << "введит b" << endl;
    cin >> b;
    z1 = 2 * pow(sin(3 * pi - 2 * b), 2) * pow(cos(5 * pi + 2 * b), 2);
    z2 = 0.25 - (0.25 * sin(5 / 2 * pi - 8 * b));
    cout << "z1 = " << z1 << endl << "z2 = " << z2 << endl;
    // 1 уравнение (1)
    double z3, z4, x, y;
    cout << "введите x" << endl;
    cin >> x;
    cout << "введите y" << endl;
    cin >> y;
    z3 = pow(cos(x), 4) + pow(sin(y), 2) + (0.25 * pow(sin(2 * x - 1), 2));
    z4 = sin(y + x) * sin(y - x);
    cout << "z3 = " << z3 << endl << "z4 = " << z4 << endl;
    // 2 уравнение (3)
    double z5, z6, a;
    cout << "введите a" << endl;
    cin >> a;
    z5 = sin((pi / 2) + (3 * a)) / (1 - sin(3 * a - pi));
    z6 = 1 / tan(((5 / 4) * pi) + ((3 / 2) * a));
    cout << "z5 = " << z5 << endl << "z6 = " << z6 << endl;
    // 2 уравнение (5)
    double z7, z8, e;
    cout << "введите e" << endl;
    cin >> e;
    z7 = sin(4 * e) / 1 + cos(4 * e) * cos(2 * e) / 1 + cos(2 * e);
    z8 = 1 / tan((3 / 2) * pi - e);
    cout << "z7 = " << z7 << endl << "z8 = " << z8 << endl;
    // 2 уравнение (7)
    return 0;
}
