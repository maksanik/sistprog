#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    // Задается кодировка консольного окна:
    system("chcp 1251>nul");
    // Символьный массив:
    char txt[SIZE];
    // Указатель на файл:
    FILE *f;
    // Попытка открыть файл для считывания:
    if (f = fopen("Pushkin.txt", "r"))
    {
        // Считывание содержимого файла:
        while (fgets(txt, SIZE, f) != NULL)
        {
            // Отображение считанной строки:
            printf(txt);
            // Отображение "линии":
            puts("---------------------------------------");
        }
        // Закрытие файла:
        fclose(f);
    }
    // Если файл не удалось открыть:
    else
    {
        printf("Не удалось открыть файл\n");
    }

    return 0;
}