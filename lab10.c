#include <stdio.h>
#include <locale.h>

float area_triangle(float a, float h);
void print_definition();
void draw_triangle(int h);

int main() {
    setlocale(LC_ALL, "RUS");
    int choice;
    float a, h;

    printf("=== МЕНЮ ===\n");
    printf("1 - Рассчитать площадь\n");
    printf("2 - Вывести определение\n");
    printf("3 - Нарисовать фигуру\n");
    printf("Ваш выбор: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Введите основание и высоту: ");
            scanf("%f %f", &a, &h);
            printf("Площадь: %.2f\n", area_triangle(a, h));
            break;
            
        case 2:
            print_definition();
            break;
            
        case 3:
            printf("Введите высоту для рисунка: ");
            scanf("%f", &h);
            draw_triangle((int)h);
            break;
            
        default:
            printf("Неверный ввод\n");
            break;
    }

    return 0;
}

float area_triangle(float a, float h) {
    return 0.5f * a * h;
}

void print_definition() {
    printf("Равнобедренный треугольник — это треугольник, у которого две стороны равны.\n");
}

void draw_triangle(int h) {
    int i, j;
    for (i = 1; i <= h; i++) {
        for (j = 0; j < h - i; j++) printf(" ");
        for (j = 0; j < 2 * i - 1; j++) {
            if (j == 0 || j == 2 * i - 2 || i == h) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}
