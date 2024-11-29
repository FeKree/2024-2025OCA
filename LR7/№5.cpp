#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int mm[10], res = 1, min = 0, max = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Введите " << i + 1 << " элемент" << endl;
        cin >> mm[i];
    }
    for (int n = 0; n < 10; n++)
    {
       if(mm[n] == 0) 
       {
        if (mm[n] == max)
        {
            max = n;
        }
        else if (mm[n] == min)
        {
            min = n;
            break;
        }
        }
    }
    for (int n = max + 1; n < min; n++)
    {
        res *= mm[n];
    }
    cout << res << endl;
    return 0;
}
