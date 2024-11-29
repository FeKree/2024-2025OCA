#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int a = 0;
    cout << "Введите номер дня недели: ";
    cin >> a;
    switch(a)
    {
       case 1:
           cout << "Понедельник";
           break;
       case 2:
           cout << "Вторник";
           break;
       case 3:
           cout << "Среда";
           break;
       case 4:
           cout << "Четверг";
           break;
       case 5:
           cout << "Пятница";
           break;
       case 6:
           cout << "Суббота";
           break;
       case 7:
           cout << "Воскресенье";
           break;
       default:
           cout << "Введи корректный номер дня недели";
    }
    return 0;
}
