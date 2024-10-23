#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() 
{
    double x, step;
    double start = 0.2, end = 2.2;
    setlocale(LC_ALL, "RUS");
    printf("¬ведите шаг табул€ции: ");
    scanf("%lf", &step);
    printf("_________________________\n");
    printf("|    x    |    f(x)     |\n");
    printf("-------------------------\n");
    for (x = start; x <= end; x += step) {
        double y = 1.8 * x * x - sin(10 * x); 
        printf("| %7.2f | %11.6f |\n", x, y);
    }

    printf("-------------------------\n");

    return 0;
}
