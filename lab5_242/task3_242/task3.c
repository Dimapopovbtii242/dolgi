#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    double x, y, a, b;
    int A, B, C;
    const double k = 4; 
    printf("������� �������� x: ");
    scanf("%lf", &x);
    a = log(fabs(-k * x));
    b = exp(2 * x) + a * x;
    y = x * pow(a, 3) + pow(b, 2);
    A = (int)a;
    B = (int)b;
    C = (int)y;
    int condition_a = ((A % 2 == 0 && B % 2 != 0) || (A % 2 != 0 && B % 2 == 0));
    int condition_b = (A % 3 == 0 && B % 3 == 0 && C % 3 == 0);
    printf("������� a ��������� (1 - ��, 0 - ���): %d\n", condition_a);
    printf("������� b ��������� (1 - ��, 0 - ���): %d\n", condition_b);
    printf("����� �����: A = %d, B = %d, C = %d\n", A, B, C);
    return 0;
}