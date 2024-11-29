#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int n, sum = 0, fir = 0, colvo = 0;
    cout << "Введите n: ";
    cin >> n;
        cout << n << endl;
        for (int i = 0; n > 0; i++)
        {
            fir = n;
            sum += n % 10;
            n = (n - (n % 10)) / 10;
            colvo += 1;
        }
        cout << "Сумма цифр равна " << sum << endl;
        cout << "Первая цифра равна " << fir << endl;
        cout << "Количество цифр равно " <<  colvo << endl;
        return 0;
}
