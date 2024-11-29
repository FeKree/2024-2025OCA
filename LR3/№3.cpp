#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int a = 0;
    cout << "Введите количество коров: ";
    cin >> a;
    if (a < 100)
  {
    if (a % 10 == 1)
    {
        cout << "На лугу пасется " << a << " корова.";
    }
    else if (a % 10 == 2 || a % 10 == 3 || a % 10 == 4)
    {
        cout << "На лугу пасется " << a << " коровы.";
    }
    else
    {
        cout << "На лугу пасется " << a << " коров.";
    }
  }
    return 0;
}
