#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    // Указатель общего назначения:
    void *pnt;
    // Переменные разных типов:
    int num;
    double x;
    char symb;
    // Использование указателя:
    pnt = &num;
    *((int *)pnt) = 512;
    printf("Число (тип int):\t%d\n", num);
    pnt = &x;
    *((double *)pnt) = 1.234567;
    printf("Число (тип double):\t%f\n", x);
    pnt = &symb;
    *((char *)pnt) = 'D';
    printf("Символ (тип char):\t%c\n", symb);

    return 0;
}
