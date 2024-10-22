#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    int L = 13333, n = 4, k = 4, m = 6;
    double result = (double)n / L;
    printf("Дано:\n");
    printf("%5d\n", n);
    printf("%5d\n", L);
    printf("-----\n");
    printf("Ответ:\n");
    printf("%+0*.*f\n", k + m + 2, m, result); 

    return 0;
}