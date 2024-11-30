#include <iostream>
#include <cmath>
using namespace std;
int maxim(int arr[], int volume)
{
    int sum = 0;
    for (int i = 0; i < volume; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{ 
    setlocale(LC_ALL, "ru");
    int m[]{ 3, 4, 5, 6, 2 }, s[]{ 9, 9, 9, 6 };
    int volume1 = sizeof(m) / sizeof(m[0]);
    int volume2 = sizeof(s) / sizeof(s[0]);
    int sum1 = maxim(m, volume1);
    int sum2 = maxim(s, volume2);
    if (sum1 > sum2)
    {
        cout << "Сумма элементов из первого массива больше";
    }
    else
    {
        cout << "Сумма элементов из второго массива больше";
    }
    return 0;
}
