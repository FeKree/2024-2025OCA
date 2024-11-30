#include <iostream>
#include <cmath>
using namespace std;
void cil(double R, double H)
{
    double pi = 3.141592;
    double pcil = pi * R * R * H;
    cout << "V = " << pcil;
}
int main()
{
    cil(1, 4);
    return 0;
}
