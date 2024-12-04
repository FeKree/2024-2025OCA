#include <iostream>
#include <string>
#include <iomanip>
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
    float average() {
        return(math[0] + fiz[0] + him[0] + inf[0]) / 4;
    }
};

int main() 
{
    setlocale(LC_ALL, "ru");
    int gr, ball;
    cout << "Введите балл который вас интересует" << endl;
    cin >> ball;
    person stud[3];
    for (int i = 0; i < 3; i++) {
        cout << "Введите фио студента " << i + 1 << endl;
        cin >> stud[i].fio;
        cout << "Введите год рождения " << i + 1 << endl;
        cin >> stud[i].year;
        cout << "Введите №группы студента " << i + 1 << endl;
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

    cout << "Введите группу интересующую вас: " << endl;
    cin >> gr;
    for (int i{}; i < 3; i++) 
    {
        if (stud[i].n_group == gr)
        {
            if (stud[i].average() > ball)
            {
                cout << "У него оценка выше , чем балл который вы ввели " << stud[i].fio << endl;
                cout << "Его Балл " << stud[i].average() << endl;
            }

        }
    }
    return 0;
}
