#include <stdio.h>
#include <locale.h>
#define  _CRT_SECURE_NO_DEPRECATE 

int main() {
    setlocale(LC_ALL, "RUS");
    while (1) {
        long long number;
        int evenCount = 0;

        printf("������� �����: ");
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

        printf("���������� ������ ����: %d\n", evenCount);

        char a;
        printf("����������? (�� - y, ��� - n): ");
        while ((a = getchar()) != 'y' && a != 'n') {
            while (getchar() != '\n');
            printf("�������� ����. ���������� ����� (�� - y, ��� - n): ");
        }

        if (a == 'n') {
            break;
        }
    }

    return 0;
}
