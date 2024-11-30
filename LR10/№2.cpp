#include <iostream>
#include <cmath>
using namespace std;
int maxim(int m)
{
    if (m == 0)
    {
        return 1;
    }
    int con = m % 10;
    int max = maxim(m / 10);
    if (max > con)
    {
        return max;
    }
    else
    {
        return con;
    }
}
int main()
{
    int ch = 12459567;
    int max = maxim(ch);
    cout << "Max = " << max;
    return 0;
}
