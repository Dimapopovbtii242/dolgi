#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    int months;
    printf("Введите возраст ребенка в месяцах: ");
    scanf("%d", &months);
    if (months < 0) {
        printf("Ошибка: возраст не может быть отрицательным.\n");
    }
    else if (months <= 2) {
        printf("Возрастная категория: новорожденный.\n");
    }
    else if (months <= 12) {
        printf("Возрастная категория: младенец.\n");
    }
    else if (months <= 36) {
        printf("Возрастная категория: раннее детство.\n");
    }
    else if (months <= 84) {
        printf("Возрастная категория: дошкольник.\n");
    }
    else if (months <= 156) {
        printf("Возрастная категория: школьник.\n");
    }
    else if (months <= 204) {
        printf("Возрастная категория: подросток.\n");
    }
    else {
        printf("Возрастная категория: старше 17 лет.\n");
    }

    return 0;
}