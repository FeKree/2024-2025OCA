#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
int main()
{ 
    setlocale(LC_ALL, "ru");
    double n;
    double f = 0;
    cout << "Введите число n: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        f += pow(i, 0.5);
    }
    cout << f;
    return 0;
}


#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
double res(int n)
{
    if (n == 1)
    {
        return sqrt(1);
    }
    return sqrt(n) + res(n - 1);
}
int main()
{ 
    setlocale(LC_ALL, "ru");
    int f = 0;
    cout << "Введите число n: " << endl;
    cin >> f;
    cout << res(f);
    return 0;
}
