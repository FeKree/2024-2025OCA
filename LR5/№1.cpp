#include <stdio.h>
#include <math.h>

int main() {
    // Инициализация и декларация
    double pi = 3.1415, a = -pi / 2, b = pi / 2,
        h = pi / 10, x, y, temp, min, max;

    min = max = 0; // Инициализация min и max
    int i = 0; // Порядковый номер
    x = a;

    // Инициализация y для первого значения
    y = 1 / (pow(x, 2) - x - 1);
    min = max = y; // Устанавливаем начальные значения min и max

    while (x <= b) {
        temp = y; // Для хранения предыдущего значения функции
        y = pow(x, 2) * cos(x) * sin(x); // Измененная функция

        i++; // Наращивание порядкового номера
        printf("#%3d x=%6.2f y=%6.2f", i, x, y); // Вывод результата как в условии

        // Определение возрастания и убывания
        if (y > temp) {
            printf(" function up\n");
        }
        else {
            printf(" function down\n");
        }

        // Обновление min и max
        if (min > y) min = y;
        if (max < y) max = y;

        x += h; // Шаг здесь
    }

    // Вывод min и max
    printf("min=%6.2f, max=%6.2f\n", min, max);

    return 0;
}
