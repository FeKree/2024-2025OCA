#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int mm[3][3], n = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Введите значение " << i + 1 << " строки " << j + 1 << " элемента" << endl;
            cin >> mm[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        if (mm[0][i] > 0 && mm[1][i] > 0 && mm[2][i] > 0)
        {
            n = mm[0][i] + mm[1][i] + mm[2][i];
        }

    }
    cout << n;
    return 0;
}
