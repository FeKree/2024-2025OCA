#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
    int n, x;
	int count = 0;
    int kpr;
	cout << "Введите размерность квадратной матрицы" << endl;
    cin >> n;
	int** a = new int* [n];
	cout << "Ваша матрица:" << endl;
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand() % 11 - 5;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    int main_sum = 0, sec_sum = 0;
    for (int i = 0; i < n; i++) 
    {
        main_sum += a[i][i];
        sec_sum += a[i][n - 1 - i];
    }
    if (main_sum > sec_sum)
    {
        kpr = pow(main_sum - sec_sum, 2);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i + j > n - 1 && a[i][j] < 0)
                {
                    a[i][j] = kpr;
                }
            }
        }
    }
    else if (sec_sum == main_sum)
    {
        cout << "Сумма диагоналей равна" << endl;
    }
    else
    {
        cout << "Сумма диагонали побочноой больше, поэтому:" << endl;
        for (int i = 0; i < n; i++) 
        {
            a[i][n - 1 - i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++) 
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    cout << endl;
    system("pause");
    return 0;
}
