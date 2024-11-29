#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double z, x, b, a, f, y;
    int g = 0;
    cout << "Введите z: ";
    cin >> z;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    if (z > 0)
    {
        cout << "Вычислим x при z>0" << endl;
        x = sqrt(z);
    }
    else
    {
        cout << "Вычислим x при z<=0" << endl;
        x = (3 * z) + 1;
    }
    while (g > 3 || g < 1)
    {
        cout << "Введите g которое будет равняться от 1 до 3: ";
        cin >> g;
        switch (g)
        {

        case 1:
            f = 2 * x;
            break;
        case 2:
            f = x * x;
            break;
        case 3:
            f = x / 3;
            break;
        default:
            cout << "Введено некорректное значение" << endl;
            break;
        }
       
    }
    y = b * cos(a * f) + sin(x / 5) + a * exp(x);
    cout << y;
    return 0;
}
