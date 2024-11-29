#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int A, B, a, fir, sec, third, four;
    cout << "Введите A: " << endl;
    cin >> A;
    cout << "Введите B: " << endl;
    cin >> B;
    if (A < 1000 || B < 1000 || B > 9999 || A > 9999)
    {
        cout << "Введены неверные значения";
    }
    for (int i = A; i < B; i++)
    {
        a = i;
        fir = a / 1000;
        a -= fir * 1000;
        sec = a / 100;
        a -= sec * 100;
        third = a / 10;
        a -= third * 10;
        four = a;
        if (fir == four && sec == third)
        {
            cout << i << " ";
        }
    }
    return 0;
}
