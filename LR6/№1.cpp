#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    float vladosik[15], otr = 0, null = 0;
    for (int i = 0; i < 15; i++)
    {
        cout << "Запишите " << i + 1 << " вещественное число" << endl;
        cin >> vladosik[i];
        if (vladosik[i] < 0)
        {
            otr += 1;
        }
        if (vladosik[i] == 0)
        {
            null += 1;
        }
    }
    cout << "Кол-во отрицательных чисел равно " << otr << endl;
    cout << "Кол-во нулевых чисел равно " << null << endl;
    return 0;
}
