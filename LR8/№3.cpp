#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int mm[20], pp[20], nn[20], nnsum = 0, nnmin = 31, nnmax = 9;
    for (int n = 0; n < 20; n++)
    {
        ё
        pp[n] = rand() % (20 - 10 + 1) + 10;
    }
    for (int n = 0; n < 20; n++)
    {
        nn[n] = mm[n] + pp[n];
        
    }
    for (int n = 0; n < 20; n++)
    {
        if (nn[n] > nnmax)
        {
            nnmax = nn[n];
        }
        if (nn[n] < nnmin)
        {
            nnmin = nn[n];
        }
        nnsum += nn[n];
    }
    cout << "среднее арифметическое элементов третьего массива " << nnsum / 20 << endl;
    cout << "Минимальный элемент третьего массива " << nnmin << endl;
    cout << "Максимлаьный элемент третьего массива " << nnmax << endl;
    return 0;
}
