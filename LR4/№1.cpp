#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int N, K;
    cout << "Введите N при условии (0<N<K<1000): ";
    cin >> N;
    cout << "Введите K при условии (0<N<K<1000): ";
    cin >> K;
    if (N > 0 && N < K && K < 1000)
    {
        for (int i = N; i <= K; i++)
        {
            if (i % 3 == 0 && i % 5 != 0)
            {
                cout << i << endl;
            }
        }
    }
    else
    {
        cout << "Вы ввели неверные значения для N и K" << endl;
    }
    return 0;
}
