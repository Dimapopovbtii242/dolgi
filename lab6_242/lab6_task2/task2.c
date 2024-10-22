#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    double x, F;
    printf("¬ведите значение x: ");
    scanf("%lf", &x);
    F = (x >= 8) ? (-pow(x, 2) + x - 9) : (1 / (pow(x, 4) - 6));
    printf("«начение F(x) = %.5lf (при x = %.1lf)\n", (x >= 8 ? (-pow(x, 2) + x - 9) : (1 / (pow(x, 4) - 6))), x);
    return 0;
}