#include <locale.h>
#include <stdio.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	printf("123\n");
	printf("1\n2\n3\n");
	printf(" \t1\n \t2\n \t3\n");
	printf("\t%3d\n \t%4d\n \t%5d\n \t%6d\n", 1, 2, 3, 4);
	printf("%10.3f\n ", 12.234657);
	printf("%10.5f\n ", 12.234657);
	printf("Остаток от деления %d на %d равен %d\n ", 5, 2, 5 % 2);
	printf("Остаток от деления %d на %d равен %d\n ", 7, 5, 7 % 5);
	printf("умножение %d на %d равено %d\n ", 2000, 4, 2000 * 4);
	printf("%g разделить %e равно %f\n ", 5., 2., 5. / 2);
	printf("%d разделить %d равно %d\n ", 5., 2., 5. / 2);
	printf("%g разделить %g равно %g\n ", 5., 2., 5. / 2);
	printf("%e разделить %e равно %e\n ", 5., 2., 5. / 2);
	printf("%f разделить %f равно %f\n ", 5., 2., 5. / 2);
	return 0;
}
