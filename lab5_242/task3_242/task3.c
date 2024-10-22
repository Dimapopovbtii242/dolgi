#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    double x, y, a, b;
    int A, B, C;
    const double k = 4; 
    printf("Введите значение x: ");
    scanf("%lf", &x);
    a = log(fabs(-k * x));
    b = exp(2 * x) + a * x;
    y = x * pow(a, 3) + pow(b, 2);
    A = (int)a;
    B = (int)b;
    C = (int)y;
    int condition_a = ((A % 2 == 0 && B % 2 != 0) || (A % 2 != 0 && B % 2 == 0));
    int condition_b = (A % 3 == 0 && B % 3 == 0 && C % 3 == 0);
    printf("Условие a выполнено (1 - да, 0 - нет): %d\n", condition_a);
    printf("Условие b выполнено (1 - да, 0 - нет): %d\n", condition_b);
    printf("Целые части: A = %d, B = %d, C = %d\n", A, B, C);
    return 0;
}