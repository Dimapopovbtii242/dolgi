#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    int months;
    printf("������� ������� ������� � �������: ");
    scanf("%d", &months);
    if (months < 0) {
        printf("������: ������� �� ����� ���� �������������.\n");
    }
    else if (months <= 2) {
        printf("���������� ���������: �������������.\n");
    }
    else if (months <= 12) {
        printf("���������� ���������: ��������.\n");
    }
    else if (months <= 36) {
        printf("���������� ���������: ������ �������.\n");
    }
    else if (months <= 84) {
        printf("���������� ���������: ����������.\n");
    }
    else if (months <= 156) {
        printf("���������� ���������: ��������.\n");
    }
    else if (months <= 204) {
        printf("���������� ���������: ���������.\n");
    }
    else {
        printf("���������� ���������: ������ 17 ���.\n");
    }

    return 0;
}