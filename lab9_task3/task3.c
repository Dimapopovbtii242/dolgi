#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#define M_PI 3.14
void mein(char sim, int d1, int d2, double ugl) 
{
    double ugl_rad = ugl * M_PI / 180.0;
    int h = (int)(d1 * sin(ugl_rad) / 2); 
    int w = (int)(d2 * cos(ugl_rad) / 2);  
    int height = 2 * h + 1;
    int width = 2 * w + 1;
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            int dx = x - w;
            int dy = y - h;
            if (abs(dx) * d1 + abs(dy) * d2 <= d1 * d2) {
                printf("%c", sim);  
            }
            else {
                printf(" ");         
            }
        }
        printf("\n"); 
    }
}

int main() 
{
    char sim;
    int d1, d2;
    double ugl;
    setlocale(LC_ALL, "RUS");
    printf("Введите символ: ");
    scanf(" %c", &sim);
    printf("Введите d1: ");
    scanf("%d", &d1);
    printf("Введите d2: ");
    scanf("%d", &d2);
    printf("Введите угол: ");
    scanf("%lf", &ugl);
    mein(sim, d1, d2, ugl);

    return 0;
}