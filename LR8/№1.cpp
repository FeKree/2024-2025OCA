#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int mm[20] = { 1, -4, 5, 244, -20, 41, -1, 0, -25, 20, -14, -17, 100, 0, 79, 11, -55, 1, 88, -99 }, a = 0, bvvod, bcol = 0, cmin = 2000000, dsum = 0, efir = 0, elast = 0, esum = 0, fmax = 0, fsum = 0, fin = 0;
    for (int n = 0; n < 20; n++)
    {
        if (mm[n] < 0)
        {
            if (n % 2 != 0)
            {
                a += mm[n];
            }
        }
    }
    cout << "Сумма отрицательных элементов с нечетными номерами " << a << endl;//a
    cout << "Введите число " << endl;
    cin >> bvvod;
    cout << "Номера элементов массива, больших числа которое вы только что ввели равны ";
    for (int n = 0; n < 20; n++)
    {
        if (mm[n] > bvvod)
        {
            bcol++;
            cout << n + 1 << " ";
        }
    }
    cout << "Кол-ва элементов массива, больших числа которое вы только что ввели равны " << bcol << endl;//b
    for (int n = 0; n < 20; n++)
    {
        if (mm[n] < fabs(cmin))
        {
            cmin = mm[n];
        }
    }
    cout << "Минимальный по модулю элемент массива " << cmin << endl;//c

    for (int n = 0; n < 20; n++)
    {
        if (n % 2 != 0)
        {
            dsum += mm[n];
        }
    }
    for (int n = 0; n < 20; n++)
    {
        if (mm[n] > dsum / 20)
        {
            cout << "Элемент массива, которые будут больше, чем среднее арифметическое нечетных элементов будет равен " << mm[n] << endl;
        }
    } //d
    for (int n = 0; n < 20; n++)
    {
        if (mm[n] > 0)
        {
            efir = n;
            break;
        }
        continue;
        if (mm[n] > 0)
        {
            elast = n;
        }
        esum += mm[n];
    } //e
    for (int n = 0; n < 20; n++)
    {
        if (mm[n] > fmax)
        {
            fmax = mm[n];
            fin = n;
        }
    }
    for (int n = 0; n < fin; n++)
    {
        if (mm[n] > 0)
        {
            fsum += mm[n];
        }
    }
    cout << "сумму положительных элементов массива, расположенных до (первого) максимального элемента " << fsum;
    //f
        return 0;
}
