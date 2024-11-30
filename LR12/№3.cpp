#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
int main()
{ 
    setlocale(LC_ALL, "ru");
    double S = 0;
    double mas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 1; i <= 10; i++)
    {
        mas[i] *= mas[i - 1];
    }
    for (int i = 0; i < 10; i++)
    {
        mas[i] = 1 / mas[i];
        S += mas[i];
    }
    cout << S;
    return 0;
}


#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
double fac(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fac(n - 1);
}
double Sum(int S)
{
    if (S == 0)
    {
        return 0;
    }
    return (1 / fac(S)) + Sum(S - 1);
}
int main()
{ 
    setlocale(LC_ALL, "ru");
    int S;
    cout << "Введите S: " << endl;
    cin >> S;
    cout << Sum(S);
    return 0;
}
