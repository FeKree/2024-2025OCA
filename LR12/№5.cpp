#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
double n_chlen(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return 1 + (1/n_chlen(n - 1));
}
int main()
{ 
    setlocale(LC_ALL, "ru");
    int n;
    cout << "Введите n: " << endl;
    cin >> n;
    cout << n_chlen(n);
    return 0;
}
