#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

struct person
{
    char fio[20];
    int year;
    int n_group;
    int fiz[1];
    int math[1];
    int inf[1];
    int him[1];
    float average()
    {
        return (math[0] + fiz[0] + him[0] + inf[0]) / 4;
    }
};

void input(person stud[])
{
    ofstream out("stud.txt", ios::app);
    for (int i = 0; i < 3; i++)
    {
        if (out.is_open()) {
            out << stud[i].fio << endl <<
                stud[i].year << endl <<
                stud[i].n_group << endl <<
                stud[i].fiz[0] << endl <<
                stud[i].math[0] << endl <<
                stud[i].him[0] << endl <<
                stud[i].inf[0] << endl;
        }
    }
    out.close();
}

void output()
{
    ifstream in("stud.txt");
    if (!in.is_open())
    {
        cout << "Ошибка открытия файла." << endl;
        return;
    }

    person stud;
    while (in >> stud.fio >> stud.year >> stud.n_group >> stud.fiz[0] >> stud.math[0] >> stud.him[0] >> stud.inf[0])
    {
        cout << "ФИО: " << stud.fio << endl;
        cout << "Год рождения: " << stud.year << endl;
        cout << "№ группы: " << stud.n_group << endl;
        cout << "Оценка по физике: " << stud.fiz[0] << endl;
        cout << "Оценка по математике: " << stud.math[0] << endl;
        cout << "Оценка по химии: " << stud.him[0] << endl;
        cout << "Оценка по информатике: " << stud.inf[0] << endl;
        cout << "Средний балл: " << fixed << setprecision(2) << stud.average() << endl << endl;
    }

    in.close();
}

int main()
{
    setlocale(LC_ALL, "ru.UTF-8");
    int gr, ball;
    cout << "Введите балл который вас интересует" << endl;
    cin >> ball;
    person stud[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Введите фио студента " << i + 1 << endl;
        cin >> stud[i].fio;
        cout << "Введите год рождения " << i + 1 << endl;
        cin >> stud[i].year;
        cout << "Введите № группы студента " << i + 1 << endl;
        cin >> stud[i].n_group;
        cout << "Введите оценку по физике " << i + 1 << endl;
        cin >> stud[i].fiz[0];
        cout << "Введите оценку по математике " << i + 1 << endl;
        cin >> stud[i].math[0];
        cout << "Введите оценку по химии " << i + 1 << endl;
        cin >> stud[i].him[0];
        cout << "Введите оценку по информатике " << i + 1 << endl;
        cin >> stud[i].inf[0];
    }

    cout << "Введите группу, интересующую вас: " << endl;
    cin >> gr;
    for (int i{}; i < 3; i++)
    {
        if (stud[i].n_group == gr)
        {
            if (stud[i].average() > ball)
            {
                cout << "У " << stud[i].fio << " оценка выше, чем балл который вы ввели" << endl;
                cout << "Его балл: " << stud[i].average() << endl;
            }
        }
    }

    input(stud);
    output();

    return 0;
}
