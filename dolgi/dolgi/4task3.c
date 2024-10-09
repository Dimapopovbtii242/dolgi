#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    int N;
    printf("������� ����������� ����� ����� N: ");
    scanf("%d", &N);
    if (N < 100 || N > 999) {
        printf("������: ������� ���������� ����������� �����.\n");
        return 1;
    }
    int last_digit = N % 10;
    int first_digit = N / 100;
    int sum_of_digits = first_digit + (N / 10 % 10) + last_digit;
    printf("��������� ����� �����: %d\n", last_digit);
    printf("������ ����� �����: %d\n", first_digit);
    printf("����� ���� �����: %d\n", sum_of_digits);
    return 0;
}