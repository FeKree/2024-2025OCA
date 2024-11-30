#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
int main()
{ 
    setlocale(LC_ALL, "ru");
    string str;
    cout << "Введите число" << endl;
    cin >> str;
    int length = str.length();
    cout << length;
    return 0;
}


#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
int length(int i)
{
    if (i < 10 && i > -10)
    {
        return 1;
    }
    return 1 + length(i / 10);
}
int main()
{ 
    setlocale(LC_ALL, "ru");
    int str = 9323238;
    cout << length(str) << endl;
    return 0;
}
