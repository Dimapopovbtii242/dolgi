#include <stdio.h>
#include <locale.h>
#define  _CRT_SECURE_NO_DEPRECATE 

int main() {
    setlocale(LC_ALL, "RUS");
    while (1) {
        long long number;
        int evenCount = 0;

        printf("Введите число: ");
        scanf("%lld", &number);

        if (number < 0) {
            number = -number;
        }

        while (number > 0) {
            int digit = number % 10;
            if (digit % 2 == 0) {
                evenCount++;
            }
            number /= 10;
        }

        printf("Количество четных цифр: %d\n", evenCount);

        char a;
        printf("Продолжить? (Да - y, нет - n): ");
        while ((a = getchar()) != 'y' && a != 'n') {
            while (getchar() != '\n');
            printf("Неверный ввод. Попробуйте снова (Да - y, нет - n): ");
        }

        if (a == 'n') {
            break;
        }
    }

    return 0;
}
