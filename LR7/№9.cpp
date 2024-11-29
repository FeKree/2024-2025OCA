#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int mm[10], res = 0, min = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Введите " << i + 1 << " элемент" << endl;
        cin >> mm[i];
    }
    for (int n = 0; n < 10; n++)
    {
        if (mm[n] == 0)
        {
            min = n;
        }
    }
    for (int n = min + 1; n < 10; n++)
    {
        res += mm[n];
    }
    cout << res;
    return 0;
}
