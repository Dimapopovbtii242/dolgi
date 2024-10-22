#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    double x = 2.444;
    double y = 0.869e-2;
    double z = -0.13e3;
    double y_x = fabs(y - x);
    double y_tgz = fabs(y - tan(z));
    double numerator = pow(x, y + 1) + exp(y - 1);
    double denominator = 1 + x * y_tgz;
    double h = (numerator / denominator) * (1 + y_x)
        + pow(y_x, 2) / 2
        - pow(y_x, 3) / 3;
    printf("При x = %.3lf, y = %.3e, z = %.3e, значение h = %.5lf\n", x, y, z, h);
    return 0;
}