#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");
    const double pi = 3.1415; // Константа pi
    const double a = 0.1, b = 1.0, h = 0.1; // Константы для диапазона и шага
    double s, y, x = a;
    int k, n;

    printf("Введите n (положительное целое число): ");

    // Проверка корректности ввода
    if (scanf_s("%d", &n) != 1 || n <= 0) {
        printf("Ошибка: n должно быть положительным целым числом.\n");
        return 1; // Завершение программы с кодом ошибки
    }

    while (x <= b) {
        s = 0; // Обнуляем s перед каждой итерацией
        for (k = 1; k <= n; k++) {
            s += pow(x, 2 * k + 1) / 2 * k + 1;
        }

        y = exp(x) - exp(- 1 * x) / 2;

        // Исправлено на %6.2f для третьего значения
        printf("%6.2f %6.2f %6.2f\n", s, y, s - y);

        x += h; // Шаг здесь
    }

    return 0;
}
