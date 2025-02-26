#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string surname;
    string name;
    string fathername;
    string address;
    string gender;
    string education;
    int year_birth;

public:
    Person(string surname, string name, string fathername, string address, string gender, string education, int year_birth) {
        this->surname = surname;
        this->name = name;
        this->fathername = fathername;
        this->address = address;
        this->gender = gender;
        this->education = education;
        this->year_birth = year_birth;
    }

    // Set методы
    void setSurname(string surname) {
        this->surname = surname; 
    }
    void setName(string name) {
        this->name = name; 
    }
    void setFathername(string fathername) { 
        this->fathername = fathername; 
    }
    void setAddress(string address) { 
        this->address = address; 
    }
    void setGender(string gender) {
        this->gender = gender; }
    void setEducation(string education) { 
        this->education = education; 
    }
    void setYearBirth(int year_birth) { 
        this->year_birth = year_birth; 
    }

    // Get методы
    string getSurname() {
        return surname;
    }
    string getName() { 
        return name;
    }
    string getFathername() { 
        return fathername; 
    }
    string getAddress() { 
        return address; 
    }
    string getGender() {
        return gender;
    }
    string getEducation() {
        return education; 
    }
    int getYearBirth() { 
        return year_birth;
    }

    // Метод для отображения информации
    void show() {
        cout << "Фамилия: " << surname << ", Имя: " << name << ", Отчество: " << fathername
            << ", Адрес: " << address << ", Пол: " << gender << ", Образование: " << education
            << ", Год рождения: " << year_birth << endl;
    }
};

void list_older_than(Person people[], int size, int age, int current_year) {
    cout << "Список граждан, возраст которых превышает " << age << " лет:" << endl;
    for (int i = 0; i < size; i++) {
        if ((current_year - people[i].getYearBirth()) > age) {
            people[i].show();
        }
    }
}

void list_higher_education(Person people[], int size) {
    cout << "\nСписок граждан с высшим образованием:" << endl;
    for (int i = 0; i < size; i++) {
        if (people[i].getEducation() == "Высшее") {
            people[i].show();
        }
    }
}

void list_male(Person people[], int size) {
    cout << "\nСписок граждан мужского пола:" << endl;
    for (int i = 0; i < size; i++) {
        if (people[i].getGender() == "мужской") {
            people[i].show();
        }
    }
}

int main() {
    setlocale(LC_ALL, "RU");
    Person people[3] = {
        Person("Синегуб", "Максим", "Дмитриевич", "ул.Синегуба д.666", "мужской", "Высшее", 2000),
        Person("Пасека", "Дарья", "Романовна", "ул.Симоновича д.111", "женский", "Высшее", 2001),
        Person("Бояр", "Ден", "Александрович", "ул.Бояра д.777", "мужской", "Среднее", 2004),
    };

    int age_threshold = 20;
    int current_year = 2025;
    int size = 3;

    list_older_than(people, size, age_threshold, current_year);
    list_higher_education(people, size);
    list_male(people, size);

    return 0;
}
