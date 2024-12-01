#include <stdio.h>
#include <math.h>
#include <string.h>
#include "calculate.h"

int main(void)
{
    float Numeral;
    char Operation[5];
    float Result;

    printf("Число: ");
    if (scanf("%f", &Numeral) != 1)
    {
        printf("Ошибка ввода числа!\n");
        return 1;
    }

    printf("Арифметическое действие (+,-,*,/,pow,sqrt,sin,cos,tan): ");
    if (scanf("%4s", Operation) != 1)
    {
        printf("Ошибка ввода операции!\n");
        return 1;
    }

    Result = Calculate(Numeral, Operation);
    if (Result != HUGE_VAL)
    {
        printf("Результат: %6.2f\n", Result);
    }
    else
    {
        printf("Ошибка при вычислении.\n");
    }

    return 0;
}