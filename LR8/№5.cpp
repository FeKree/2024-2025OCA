#include <iostream>
#include <cmath>
#include <ctime>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int A[20], B[20]{};
    for (int i = 0; i < 20; i++)
    {
        A[i] = rand() % 20 + 1;
        cout << A[i] << " ";
        if (A[i] < 10)
        {
            B[i] = A[i];
        }
    }
    cout << endl;
    sort(B, B + 20);
    for (int i = 0; i < 20; i++)
    {
        if (B[i] != 0)
        {
            cout << B[i] << " ";
        }
    }
    return 0;
}
