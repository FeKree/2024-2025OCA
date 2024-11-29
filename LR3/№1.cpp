#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double a, b, c, D, x1, x2;
        cout << "Введите a: ";
        cin >> a;
        cout << "Введите b: ";
        cin >> b;
        cout << "Введите c: ";
        cin >> c;
        D = pow(b, 2) - 4 * a * c;
        if (D > 0)
        {
            cout << "У уравнеиия будет 2 корня" << endl;
            x1 = (-1 * b - sqrt(D)) / 2 * a;
            x2 = (-1 * b + sqrt(D)) / 2 * a;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
        else if (D < 0)
        {
            cout << "У уравнеиия нет корней" << endl;
        }
        else if (D == 0)
        {
            cout << "У уравнеиия будет 1 корень" << endl;
            x1 = -1 * b * 2 * a;
            cout << "x = " << x1 << endl;
        }

    return 0;
}
