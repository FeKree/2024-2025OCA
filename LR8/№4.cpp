#include <iostream>
#include <math.h>
#include <ctime>
#include <stdlib.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int mm[20], pp[20];
    for (int n = 0; n < 20; n++)
    {
        cout << "Введите " << n + 1 << " элемент массива" << endl;
        cin >> mm[n];
    }
    for (int n = 0; n < 20; n++)
    {
        if (mm[n] != 0)
        {
            pp[n] = mm[n];
        }
    }
    for (int n = 0; n < 20; n++)
    {
        if(pp[n] < 1000000 && pp[n] > -1000000)
        cout << pp[n] << " ";
    }
    return 0;
}
