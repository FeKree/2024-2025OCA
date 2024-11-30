#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int mm[10], p = 0;
    for (int n = 0; n < 10; n++)
    {
        cout << "Введите " << n + 1 << " элемент массива" << endl;
        cin >> mm[n];
    }
    for (int i = 0, n = 9; i < 5, n > 4; i++, n--)
    {
        if (mm[i] == mm[n])
        {
            p++;
        }
    }
    if (p == 5)
    {
        cout << "Это паллиндром";
    }
    else
    {
        cout << "Это  не паллиндром";
    }
    return 0;
}
