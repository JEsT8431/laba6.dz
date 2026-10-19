#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    float x, y;
    printf("Введите x и y: ");
    scanf("%f %f", &x, &y);

    if (y <= x + 5 && x * x + y * y >= 3 && x <= 0 && y >= 0)
        printf("Лежит\n");
    else
        printf("Не лежит\n");

    return 2;
}