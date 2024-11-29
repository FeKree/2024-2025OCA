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
    cout << "Введите размер 1 и 2 массива" << endl;
    cin >> n;
    x = new int[n];
    y = new int[n];
    for (int i = 0; i < n; i++)
    {
        x[i] = rand() % 10 - 5;
        y[i] = rand() % 10 - 5;
    }
    for (int i = 0; i < n; i++)
    {
        if (y[1] == x[i])
        {
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " " << y[i] << endl;
        cout << i + 1 << " " << x[i] << endl;
    }
    cout << count << " раз встречается второй элемент второго массива у(m) в первом массиве х(n).";
    return 0;
}
