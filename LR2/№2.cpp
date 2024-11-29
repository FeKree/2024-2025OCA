#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double u, x, y, z;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;
    cout << "Введите z: ";
    cin >> z;
    u = max(y, z) / min(min(x, y), min(y, z));
    cout << "Результат: " << u;
    return 0;
}
