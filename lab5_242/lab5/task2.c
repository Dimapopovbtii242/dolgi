#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    double k = 4;
    double x;
    printf("������� �������� x: ");
    scanf("%lf", &x);
    double a = log(fabs(-k * x));
    double b = exp(2 * x) + a * x;
    double y = x * pow(a, 3) + pow(b, 2);
    printf("��� x = %.2lf, �������� y = %.2lf\n", x, y);
    return 0;
}