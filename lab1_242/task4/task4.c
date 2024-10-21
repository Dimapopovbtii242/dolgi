#include <locale.h>
#include <stdio.h>
void name()
{
	setlocale(LC_ALL, "RUS");
	puts(" * * * * * * * * * * * * * * * * * * * * * * ");
	puts(" * тема: Разработка консольного приложения * ");
	puts(" *    Выполнил Попов Д.С.                  * ");
	puts(" *                                         * ");
	puts(" *                                         * ");
	puts(" *                                         * ");
	puts(" * * * * * * * * * * * * * * * * * * * * * * ");
	getchar();
	return 0;
}
void data()
{
	puts("                                         ");
	puts("                                         ");
	puts("     __    /|   __    __    __    __     ");
	puts("    |  |  /_|  |  |  |__|  |  |  |__     ");
	puts("    |  |    |  |  |     |  |  |  |  |    ");
	puts("    |__|    |  |__|  ___|  |__|  |__|    ");
	puts("                                         ");
	puts("                                         ");
	puts("                                         ");
	puts("                                         ");
	puts("                                         ");
	puts("                                         ");
	getchar();
	return 0;
}
void main()
{
	name();
	data();
	return 0;
}