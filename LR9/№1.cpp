#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int mm[3][3], n = 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Введите значение " << i + 1 << " строки " << j + 1 << " элемента" << endl;
            cin >> mm[i][j];
            if (i == 0 && mm[i][j] == 0)
            {
                n--;
            }
            if (i == 1 && mm[i][j] == 0)
            {
                n--;
            }
            if (i == 2 && mm[i][j] == 0)
            {
                n--;
            }
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mm[i][j] << " ";
        }
        cout << endl;

    }
    cout << n;
    return 0;
}
