#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int n;   


    printf("Введите показатель степени 10 (например, -9, 3, 6): ");
    if (scanf("%d", &n) != 1) {
        printf("Ошибка: введите целое число!\n");
        return 1;
    }

    printf("10^%d — ", n);

    switch (n) {
    case -24: printf("иокто (и)\n");    break;
    case -21: printf("зепто (з)\n");    break;
    case -18: printf("атто (а)\n");     break;
    case -15: printf("фемто (ф)\n");    break;
    case -12: printf("пико (п)\n");     break;
    case  -9: printf("нано (н)\n");     break;
    case  -6: printf("микро (мк)\n");   break;
    case  -3: printf("милли (м)\n");    break;
    case  -2: printf("санти (с)\n");    break;
    case  -1: printf("деци (д)\n");     break;
    case   0: printf("(без приставки)\n"); break;
    case   1: printf("дека (да)\n");    break;
    case   2: printf("гекто (г)\n");    break;
    case   3: printf("кило (к)\n");     break;
    case   6: printf("мега (М)\n");     break;
    case   9: printf("гига (Г)\n");     break;
    case  12: printf("тера (Т)\n");     break;
    case  15: printf("пета (П)\n");     break;
    case  18: printf("экса (Э)\n");     break;
    case  21: printf("зетта (З)\n");    break;
    case  24: printf("йотта (И)\n");    break;
    default:
        printf("нет соответствующей приставки СИ\n");
    }

    return 0;
}