#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
int main()
{ 
    setlocale(LC_ALL, "ru");
    int count = 0;
    string mas[] = { "ывы", "почемц", "ллвыл" };
    for (int i = 0; i < 3; i++)
    {
        if (mas[i][0] == mas[i].back())
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
