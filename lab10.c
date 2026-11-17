#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "Header.h"

int main() {
    setlocale(LC_ALL, "RUS");
    int choice;
    int a, h;
    char c;
    do {
        printf("=== МЕНЮ ===\n");
        printf("1 - Рассчитать площадь\n");
        printf("2 - Вывести определение\n");
        printf("3 - Нарисовать фигуру звёздочками\n");
        printf("4 - Нарисовать фигуру произвольным символом\n");
        printf("5 - Выйти из программы\n");
        printf("Ваш выбор: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Введите основание: ");
            scanf("%f", &a);
            height();
            printf("Площадь: %.2f\n", area_triangle(a, h));
            break;

        case 2:
            print_definition();
            break;

        case 3:
            draw_triangle_2(3, '*');
            break;

        case 4:
            printf("Введите высоту для рисунка: ");
            scanf(" %f", &h);
            printf("Введите символ, которым будет нарисован треугольник:");
            scanf(" %c", &c);
            draw_triangle_2((int)h, (char)c);
            break;

        case 5:
            printf("Программа завершена.");
            break;

        default:
            printf("Неверный ввод\n");
            break;
        }
        
    }
    while (choice != 5);

    return 0;
}
