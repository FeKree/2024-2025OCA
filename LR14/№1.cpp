#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int n, m;
	int count;
	cout << "Введите размерность массива" << endl;
	cin >> n >> m;
	int** arr = new int* [n];
	
	cout << "Ваш массив:" << endl;
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
        for (int j = 0; j < m; j++) {
            arr[i][j] = rand() % 11 - 5;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
	int* res = new int[m];
    for (int j = 0; j < m; j++) 
    {
        res[j] = 1;
    }

    for (int j = 0; j < m; j++) {
        bool otr = false;
        for (int i = 0; i < n; i++) {
            if (arr[i][j] < 0) {
                res[j] *= arr[i][j];
                otr = true;
            }
        }
        if (!otr)
        {
            res[j] = 0;
        }
    }
    cout << "Произведения отрицательных элементов в каждом столбце:" << endl;
    for (int j = 0; j < m; j++) {
        cout << "Столбец " << j + 1 << ": " << res[j] << endl;
    }
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    delete[] res;
	system("pause");
    return 0;
}
