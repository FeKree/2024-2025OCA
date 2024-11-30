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
    n = fabs(mm[1][0]) + fabs(mm[2][0]) + fabs(mm[2][1]);
    cout << n;
    return 0;
}
