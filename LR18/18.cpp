#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <locale.h>
using namespace std;

struct ZNAK
{
    string NAME;
    string ZODIAC;
    int BDAY[3];
};


//Структура
int main()
{
    setlocale(LC_ALL, "ru");
    const int SIZE = 8;
    ZNAK BOOK[SIZE];
    //Массив для заполнения


    for (int i = 0; i < SIZE; ++i)
    {
        cout << "Введите имя " << (i + 1) << ":";
        cin >> BOOK[i].NAME;
        cout << "Введите знак зодиака для " << BOOK[i].NAME << ":";
        cin >> BOOK[i].ZODIAC;
        cout << "Введите день рождения " << BOOK[i].NAME << ":";
        cin >> BOOK[i].BDAY[0] >> BOOK[i].BDAY[1] >> BOOK[i].BDAY[2];
        cin.ignore();
    }
    //ВВод


    string Search;
    bool found = false;
    cout << "Введите знак Зодиака для поиска: ";
    cin >> Search;
    cout << "Люди, родившиеся под знаком " << Search << ":" << endl;
    for (int i = 0; i < SIZE; ++i) {
        if (BOOK[i].ZODIAC == Search) {
            cout << "Имя: " << BOOK[i].NAME << ", Дата рождения: " << BOOK[i].BDAY[0] << "." << BOOK[i].BDAY[1] << "." << BOOK[i].BDAY[2] << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Нет людей, родившихся под знаком " << Search << endl;
    }
    //Вывод
    return 0;
}
