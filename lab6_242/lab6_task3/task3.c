#include <stdio.h>
#include <locale.h>

int main() 
{
    int num1, num2;
    setlocale(LC_ALL, "RUS");
    printf("Введите первое число: ");
    scanf("%d", &num1);
    printf("Введите второе число: ");
    scanf("%d", &num2);
    if (num2 != 0) 
    { 
        printf((num1 % num2 == 0) ? "Да, %d делится нацело на %d\n" : "Нет, %d не делится нацело на %d\n", num1, num2);
    }
    else 
    {
        printf("Ошибка: деление на 0 невозможно.\n");
    }

    return 0;
}