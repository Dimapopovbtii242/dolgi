#include <locale.h>
#include <stdio.h>
#include <stdlib.h> 
void main()
{
	setlocale(LC_ALL, "RUS");
	puts("���-�� ��������");
	system("pause");
	getchar();
	return 0;
}
