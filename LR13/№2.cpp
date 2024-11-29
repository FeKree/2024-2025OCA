#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main()
{ 
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int* x;
    int* y;
    int count = 0, n;
    cout << "Введите размер массива" << endl;
    cin >> n;
    x = new int[n];
    for (int i = 0; i < n; i++)
    {
        x[i] = rand() % 7;
        cout << " " << x[i];
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (x[i] > 3)
        {
            count++;
        }
    }
    int t = 0;
    y = new int[count];
    for (int i = 0; i < n; i++)
    {
        if (x[i] > 3)
        {
            y[t] = x[i];
            t++;
        }
    }
    for (int i = 0; i < count; i++)
    {
        cout << " " << y[i];
    }
    return 0;
}
