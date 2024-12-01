#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int mm[10];
    for (int i = 0; i < 10; i++)
    {
        mm[i] = rand() % 10;
        cout << mm[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (mm[j] > mm[j + 1])
            {
                int a = mm[j];
                mm[j] = mm[j + 1];
                mm[j + 1] = a;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << mm[i] << " ";
    }
    system("pause");
    return 0;
}
