/*
 * Студент: Пылинский Даниил Максимович
 * Группа: ПИ 1-1
 * Лабораторная работа № 10
 * Назначение: Самостоятельная работа. Вычисление разности максимума и минимума трёх чисел через range3
 */

#include <stdio.h>

int max2(int a, int b) {
    if (a > b) return a;
    return b;
}

int min2(int a, int b) {
    if (a < b) return a;
    return b;
}

int range3(int x, int y, int z) {
    int max_val = max2(max2(x, y), z);
    int min_val = min2(min2(x, y), z);
    return max_val - min_val;
}

int main(void) {
    int x, y, z;
    if (scanf("%d %d %d", &x, &y, &z) != 3) {
        puts("Input error");
        return 1;
    }
    if (x < -1000 || x > 1000 || y < -1000 || y > 1000 || z < -1000 || z > 1000) {
        puts("Range error");
        return 1;
    }
    printf("Range = %d\n", range3(x, y, z));
    return 0;
}
