#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int mm[3][3], n = 0, ch;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Введите значение " << i + 1 << " строки " << j + 1 << " элемента" << endl;
            cin >> mm[i][j];
        }
        
    }
    cout << "Введи число" << endl;
    cin >> ch;
    for (int i = 0; i < 3; i++)
    {
        if (((mm[i][0] + mm[i][1] + mm[i][2]) / 3) < ch)
        {
            n++;
        }

    }
    cout << n;
    return 0;
}
