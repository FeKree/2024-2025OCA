#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <windows.h>
#include <iomanip>
using namespace std;
using namespace sf;
// Структура для хранения информации о стрижке
struct Haircut {
    string name;      // Название стрижки
    double price;     // Цена стрижки
};

// Структура для хранения информации о записи
struct Appointment {
    string customerName; // Имя покупателя
    Haircut haircut;     // Выбранная стрижка
    string date;         // Дата записи
};

// Класс для управления барбершопом
class Barbershop {
private:
    vector<Haircut> haircuts;      // Список стрижек
    vector<Appointment> appointments; // Список записей

public:
    Barbershop() {
        // Инициализация списка стрижек
        // Мужские стрижки
        haircuts.push_back({ "Классическая мужская стрижка", 500 });
        haircuts.push_back({ "Модная мужская стрижка", 700 });
        haircuts.push_back({ "Бокс", 600 });
        haircuts.push_back({ "Канадка", 650 });
        haircuts.push_back({ "Уборка бороды", 400 });
        haircuts.push_back({ "Короткая стрижка", 550 });
        haircuts.push_back({ "Стрижка с выбритыми висками", 750 });
        haircuts.push_back({ "Стрижка под ноль", 300 });
        haircuts.push_back({ "Стрижка с текстурой", 650 });
        haircuts.push_back({ "Стрижка с градуировкой", 700 });
        haircuts.push_back({ "Стрижка с длинными висками", 600 });
        haircuts.push_back({ "Стрижка с укладкой", 800 });
        haircuts.push_back({ "Стрижка с волосами до плеч", 900 });

        // Женские стрижки
        haircuts.push_back({ "Женская стрижка каре", 600 });
        haircuts.push_back({ "Женская стрижка с градуировкой", 650 });
        haircuts.push_back({ "Каскад", 700 });
        haircuts.push_back({ "Стрижка с челкой", 550 });
        haircuts.push_back({ "Длинная стрижка", 800 });
        haircuts.push_back({ "Укладка волос", 40 });
        haircuts.push_back({ "Стрижка с окрашиванием", 900 });
        haircuts.push_back({ "Стрижка с филировкой", 650 });
        haircuts.push_back({ "Стрижка с локонами", 750 });
        haircuts.push_back({ "Стрижка с кудрями", 800 });
        haircuts.push_back({ "Стрижка с косой", 700 });
        haircuts.push_back({ "Стрижка с эффектом омбре", 950 });
        haircuts.push_back({ "Стрижка с плетением", 850 });
    }

    void showHaircuts() {
        cout << "Доступные стрижки:\n\n" << "Мужские стрижки:" << endl;
        for (size_t i = 0; i < haircuts.size(); ++i) {
            cout << i + 1 << ". " << haircuts[i].name << " - " << haircuts[i].price << " руб.\n";
            if (i == 12)
            {
                cout << endl << "Женские стрижки:" << endl;
            }
        }
    }

    void makeAppointment() {
        Appointment appointment;
        cout << "Введите ваше имя: ";
        getline(cin, appointment.customerName);

        showHaircuts();

        int choice;
        cout << "Выберите номер стрижки: ";
        cin >> choice;

        if (choice < 1 || choice > haircuts.size()) {
            cout << "Некорректный выбор. Попробуйте снова.\n";
            return;
        }

        appointment.haircut = haircuts[choice - 1];

        cout << "Введите дату записи (ДД.ММ.ГГГГ): ";
        cin >> appointment.date;
        cin.ignore(); // Игнорируем оставшийся символ новой строки

        appointments.push_back(appointment);
        cout << "Запись на стрижку \"" << appointment.haircut.name << "\" на " << appointment.date << " успешно создана!\n";
    }

    void showAppointments() {
        cout << "Записи:\n";
        for (const auto& appointment : appointments) {
            cout << "Имя: " << appointment.customerName
                << ", Стрижка: " << appointment.haircut.name
                << ", Дата: " << appointment.date << endl;
        }
    }
};

int main() 
{
    //создание пустого окна
    RenderWindow window(sf::VideoMode({ 1366, 768 }), L"BarberShop", Style::Titlebar | Style::Close);

    //Включение курсора у окна
    window.setMouseCursorVisible(true);
    Texture texture_window;
    texture_window.loadFromFile("image/background-menu.jfif");
    Sprite s(texture_window);

    //Шрифт
    Font font("minecraft.ttf");
    Text menu_text(font);

    //Вывод информации меню
    menu_text.setString(L" 1. Показать стрижки\n\n 2. Записаться на стрижку\n\n 3. Показать записи\n\n 4. Выход\n\n Выберите опцию: ");

    //Размер текста
    menu_text.setCharacterSize(16); // in pixels, not points!

    //Цвет текста
    menu_text.setFillColor(Color::White);

    // set the text style
    menu_text.setStyle(Text::Bold);

    window.clear(Color::White);
    window.draw(s);
    window.draw(menu_text);
    window.display();
    //руссификатор
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    Barbershop barbershop;
    int choice;
    //загрузка
    cout << "Подождите, идет загрузка" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << "=";
        Sleep(rand() % 500);
    }
    cout << "\nУспешно!" << endl;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    //меню
    do {
        
        cout << "\n--- Барбершоп ---\n";
        cout << "1. Показать стрижки\n";
        cout << "2. Записаться на стрижку\n";
        cout << "3. Показать записи\n";
        cout << "4. Выход\n";
        cout << "Выберите опцию: ";
        cin >> choice;
        cin.ignore(); // Игнорируем оставшийся символ новой строки

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
            cout << "Выход из программы.\n";
            break;
        default:
            cout << "Некорректный выбор. Попробуйте снова.\n";
        }

    } while (choice != 4);

    return 0;
}