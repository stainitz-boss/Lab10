#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

double fa(double x);
double fb(double x);

int main()
{
    setlocale(LC_ALL, "RUS");
    double x;
    char c;
    printf("Введите х : ");
    scanf(" %lf", &x);

    printf("Что хотите узнать? 1-произведение 2-разность квадратов 3-разность удвоенных сумм 4-fa(x) 5-fb(x)\n");
    scanf(" %c", &c);
    switch (c)
    {
    case '1':
        printf("Произведение: %lf\n", fb(x) * fa(x)); break;
    case '2':
        printf("Разность квадратов: %lf\n", (fb(x) * fb(x)) - (fa(x) * fa(x))); break;
    case '3':
        printf("Удвоенная сумма: %lf\n", 2*(fa(x) + fb(x))); break;
    case '4':
        printf("Результат fa(x): %lf\n", fa(x)); break;
    case '5':
        printf("Результат fb(x): %lf\n", fb(x)); break;
    default:
        printf("Неизвестный запрос"); break;

    }
    
   

    return 0;
}

double fa(double x)
{
    double y;
    if (x <= 3)
        y = pow(x,2) - 3 * x + 9;
    else
        y = 1.0 / (pow(x, 3) + 3);
    return y;
}

double fb(double x)
{
    double y;
    y = x * exp(sin(pow(x, 2)));
}