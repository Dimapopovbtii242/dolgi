#include <stdio.h>
#include <locale.h>

int main() 
{
    int num1, num2;
    setlocale(LC_ALL, "RUS");
    printf("������� ������ �����: ");
    scanf("%d", &num1);
    printf("������� ������ �����: ");
    scanf("%d", &num2);
    if (num2 != 0) 
    { 
        printf((num1 % num2 == 0) ? "��, %d ������� ������ �� %d\n" : "���, %d �� ������� ������ �� %d\n", num1, num2);
    }
    else 
    {
        printf("������: ������� �� 0 ����������.\n");
    }

    return 0;
}