#include <stdio.h>
#include <math.h>
#include <string.h>
#include "calculate.h"

float Calculate(float Numeral, char Operation[])
{
    float SecondNumeral;

    if (strncmp(Operation, "+", 1) == 0)
    {
        printf("Второе слагаемое: ");
        if (scanf("%f", &SecondNumeral) != 1)
        {
            printf("Ошибка ввода!\n");
            return HUGE_VAL;
        }
        return Numeral + SecondNumeral;
    }
    else if (strncmp(Operation, "-", 1) == 0)
    {
        printf("Вычитаемое: ");
        if (scanf("%f", &SecondNumeral) != 1)
        {
            printf("Ошибка ввода!\n");
            return HUGE_VAL;
        }
        return Numeral - SecondNumeral;
    }
    else if (strncmp(Operation, "*", 1) == 0)
    {
        printf("Множитель: ");
        if (scanf("%f", &SecondNumeral) != 1)
        {
            printf("Ошибка ввода!\n");
            return HUGE_VAL;
        }
        return Numeral * SecondNumeral;
    }
    else if (strncmp(Operation, "/", 1) == 0)
    {
        printf("Делитель: ");
        if (scanf("%f", &SecondNumeral) != 1)
        {
            printf("Ошибка ввода!\n");
            return HUGE_VAL;
        }
        if (SecondNumeral == 0)
        {
            printf("Ошибка: деление на ноль!\n");
            return HUGE_VAL;
        }
        return Numeral / SecondNumeral;
    }
    else if (strncmp(Operation, "pow", 3) == 0)
    {
        printf("Степень: ");
        if (scanf("%f", &SecondNumeral) != 1)
        {
            printf("Ошибка ввода!\n");
            return HUGE_VAL;
        }
        return pow(Numeral, SecondNumeral);
    }
    else if (strncmp(Operation, "sqrt", 4) == 0)
    {
        if (Numeral < 0)
        {
            printf("Ошибка: отрицательное число для sqrt!\n");
            return HUGE_VAL;
        }
        return sqrt(Numeral);
    }
    else if (strncmp(Operation, "sin", 3) == 0)
    {
        return sin(Numeral);
    }
    else if (strncmp(Operation, "cos", 3) == 0)
    {
        return cos(Numeral);
    }
    else if (strncmp(Operation, "tan", 3) == 0)
    {
        return tan(Numeral);
    }
    else
    {
        printf("Неправильно введено действие\n");
        return HUGE_VAL;
    }
}