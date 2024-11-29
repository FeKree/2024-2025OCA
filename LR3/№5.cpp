#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int A, B, C;
    cout << "Введите A: ";
    cin >> A;
    cout << "Введите B: ";
    cin >> B;
    cout << "Введите C: ";
    cin >> C;
    if (A > -10000 && A < 10000 && B > -10000 && B < 10000 && C > -10000 && C < 10000)
    {
        if (A % 2 == 0 && B % 2 == 0 && C % 2 == 1 || A % 2 == 0 && C % 2 == 0 && B % 2 == 1 || C % 2 == 0 && B % 2 == 0 && A % 2 == 1 || A % 2 == 1 && B % 2 == 1 && C % 2 == 0 || A % 2 == 1 && C % 2 == 1 && B % 2 == 0 || C % 2 == 1 && B % 2 == 1 && A % 2 == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "Числа слишком большие либо слишком маленькие";
    }
    
    return 0;
}
