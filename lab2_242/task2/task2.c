#include <locale.h>
#include <stdio.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int N = 18;
	int K = 30;
	printf("������ %d ����� %d ����� 00 ������\n", N, K);
	printf("���� %d ������ �����\n", N * 60 + K);
	printf("�� �������� �������� %d ����� � %d �����\n", 23 - N, 60 - K);
	printf("� 8.00 ������ %d ������\n", N * 3600 - 8 * 3600 + K * 60);
	printf("������� ���  = %.2f �����  � ������� ������ = %.2f ����\n", (float)N / 24, (float)K / 60);
	return 0;
}
