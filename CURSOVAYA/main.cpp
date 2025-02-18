#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <windows.h>
#include <iomanip>
using namespace std;

// ��������� ��� �������� ���������� � �������
struct Haircut {
    string name;      // �������� �������
    double price;     // ���� �������
};

// ��������� ��� �������� ���������� � ������
struct Appointment {
    string customerName; // ��� ����������
    Haircut haircut;     // ��������� �������
    string date;         // ���� ������
};

// ����� ��� ���������� �����������
class Barbershop {
private:
    vector<Haircut> haircuts;      // ������ �������
    vector<Appointment> appointments; // ������ �������

public:
    Barbershop() {
        // ������������� ������ �������
        // ������� �������
        haircuts.push_back({ "������������ ������� �������", 500 });
        haircuts.push_back({ "������ ������� �������", 700 });
        haircuts.push_back({ "����", 600 });
        haircuts.push_back({ "�������", 650 });
        haircuts.push_back({ "������ ������", 400 });
        haircuts.push_back({ "�������� �������", 550 });
        haircuts.push_back({ "������� � ��������� �������", 750 });
        haircuts.push_back({ "������� ��� ����", 300 });
        haircuts.push_back({ "������� � ���������", 650 });
        haircuts.push_back({ "������� � ������������", 700 });
        haircuts.push_back({ "������� � �������� �������", 600 });
        haircuts.push_back({ "������� � ��������", 800 });
        haircuts.push_back({ "������� � �������� �� ����", 900 });

        // ������� �������
        haircuts.push_back({ "������� ������� ����", 600 });
        haircuts.push_back({ "������� ������� � ������������", 650 });
        haircuts.push_back({ "������", 700 });
        haircuts.push_back({ "������� � ������", 550 });
        haircuts.push_back({ "������� �������", 800 });
        haircuts.push_back({ "������� �����", 40 });
        haircuts.push_back({ "������� � ������������", 900 });
        haircuts.push_back({ "������� � ����������", 650 });
        haircuts.push_back({ "������� � ��������", 750 });
        haircuts.push_back({ "������� � �������", 800 });
        haircuts.push_back({ "������� � �����", 700 });
        haircuts.push_back({ "������� � �������� �����", 950 });
        haircuts.push_back({ "������� � ���������", 850 });
    }

    void showHaircuts() {
        cout << "��������� �������:\n\n" << "������� �������:" << endl;
        for (size_t i = 0; i < haircuts.size(); ++i) {
            cout << i + 1 << ". " << haircuts[i].name << " - " << haircuts[i].price << " ���.\n";
            if (i == 12)
            {
                cout << endl << "������� �������:" << endl;
            }
        }
    }

    void makeAppointment() {
        Appointment appointment;
        cout << "������� ���� ���: ";
        getline(cin, appointment.customerName);

        showHaircuts();

        int choice;
        cout << "�������� ����� �������: ";
        cin >> choice;

        if (choice < 1 || choice > haircuts.size()) {
            cout << "������������ �����. ���������� �����.\n";
            return;
        }

        appointment.haircut = haircuts[choice - 1];

        cout << "������� ���� ������ (��.��.����): ";
        cin >> appointment.date;
        cin.ignore(); // ���������� ���������� ������ ����� ������

        appointments.push_back(appointment);
        cout << "������ �� ������� \"" << appointment.haircut.name << "\" �� " << appointment.date << " ������� �������!\n";
    }

    void showAppointments() {
        cout << "������:\n";
        for (const auto& appointment : appointments) {
            cout << "���: " << appointment.customerName
                << ", �������: " << appointment.haircut.name
                << ", ����: " << appointment.date << endl;
        }
    }
};

int main() {

    setlocale(LC_ALL, "ru");
    Barbershop barbershop;
    int choice;
    cout << "���������, ���� ��������" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << "=";
        Sleep(40);
    }
    cout << "�������!" << endl;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    do {
        cout << "\n--- ��������� ---\n";
        cout << "1. �������� �������\n";
        cout << "2. ���������� �� �������\n";
        cout << "3. �������� ������\n";
        cout << "4. �����\n";
        cout << "�������� �����: ";
        cin >> choice;
        cin.ignore(); // ���������� ���������� ������ ����� ������

        switch (choice) {
        case 1:
            barbershop.showHaircuts();
            break;
        case 2:
            barbershop.makeAppointment();
            break;
        case 3:
            barbershop.showAppointments();
            break;
        case 4:
            cout << "����� �� ���������.\n";
            break;
        default:
            cout << "������������ �����. ���������� �����.\n";
        }
    } while (choice != 4);

    return 0;
}