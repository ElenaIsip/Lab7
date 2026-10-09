#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Russian");

    float x, y;   
    char c;       

 

    printf("Калькулятор. Формат ввода: <число><операция><число>\n");
    printf("Доступные операции: +  -  *  /  ^  %%\n");
    printf("Пример: 2+3   или   2^10\n");
    printf("Введите выражение: ");

    if (scanf("%f%c%f", &x, &c, &y) != 3) {
        printf("Ошибка: неверный формат ввода!\n");
        return 1;
    }

    printf("\nРезультат: ");

    switch (c) {
    case '+':
        printf("%f%c%f=%f\n", x, c, y, x + y);
        break;

    case '-':
        printf("%f%c%f=%f\n", x, c, y, x - y);
        break;

    case '*':
        printf("%f%c%f=%f\n", x, c, y, x * y);
        break;

    case '/':
        if (y == 0) {
            printf("Ошибка: деление на ноль!\n");
        }
        else {
            printf("%f%c%f=%f\n", x, c, y, x / y);
        }
        break;

    case '^':
        printf("%f%c%f=%f\n", x, c, y, pow(x, y));
        break;
    case '%':
        if ((int)y == 0) {
            printf("Ошибка: деление на ноль!\n");
        }
        else {
            printf("%f%c%f=%f\n", x, c, y, fmod(x, y));
        }
        break;

    default:
        printf("Ошибка: неизвестная операция '%c'\n", c);
    }

    return 0;
}