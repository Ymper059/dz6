#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "RUS");
    float x, y;
    printf("Введите координаты x и y: ");
    scanf("%f %f", &x, &y);

    if ((x >= 0 && y >= 0 && y <= -x + 6) ||
        (x <= 0 && y <= 0 && y >= -x - 6)) {
        printf("Точка принадлежит заштрихованной области\n");
    }
    else {
        printf("Точка не принадлежит заштрихованной области\n");
    }
    return 0;
}
