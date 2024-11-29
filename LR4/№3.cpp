#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int n, fir, sec, third;
    for (int i = 100; i < 1000; i++)
    {
        n = i;
        fir = n / 100;
        n -= fir * 100;
        sec = n / 10;
        n -= sec * 10;
        third = n;

        if (third * fir * 2 == sec)
        {
            cout << i << endl;
        }
    }
        return 0;
}
