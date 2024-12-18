#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Объявление переменных:
    int a;
    double b;
    char s;
    // Объявление указателей:
    int *p;
    double *q;
    char *r;
    // Присваивание значений указателям:
    p = &a;
    q = &b;
    r = &s;
    // Присваивание значений переменным:
    a = 100;
    b = 123.456789;
    s = 'W';
    // Отображение значений переменных и указателей:
    printf("Значение %d записано по адресу %p\n", a, p);
    printf("Значение %f записано по адресу %p\n", b, q);
    printf("Значение %c записано по адресу %p\n", s, r);
    // Создание целочисленного массива:
    int nums[5] = {10, 20, 30, 40, 50};
    // Указатель на первый элемент массива:
    int *start = &nums[0];
    // Индексная переменная:
    int k;
    // Адреса элементов массива:
    for (k = 0; k < 5; k++)
    {
        p = &nums[k];
        printf("%ld\t%p\t%d\n", p - start, p, *p);
    }
    return 0;
}

