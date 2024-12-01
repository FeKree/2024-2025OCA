#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
    int n, x;
	int count = 0;
	cout << "Введите размерность квадратной матрицы" << endl;
    cin >> n;
	int** a = new int* [n];
    cout << "Введите x:" << endl;
    cin >> x;
	cout << "Ваш массив:" << endl;
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 11 - 5;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j < n - 1 && a[i][j] == x)
            {
                count++;
            }
        }
    }
    cout << "Количество элементов, равных заданному числу X и расположенных в верхней треугольной матрице, расположенной выше побочной диагонали, исключая саму побочную диагональ равно " << x;
    cout << endl;
    system("pause");
    return 0;
}
