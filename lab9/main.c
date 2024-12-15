#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int s;
    FILE *f;

    f = fopen("/home/maksanik/sistprog/lab9/MySymbols.txt", "w");
    if (f != NULL)
    {
        s = 'A';
        do
        {
            fputc(s, f);
            s++;
        } while (s <= 'Z');
        fclose(f);
    }
    else
    {
        printf("Не удалось открыть файл для записи\n");
    }
    f = fopen("/home/maksanik/sistprog/lab9/MySymbols.txt", "a");
    if (f != NULL)
    {
        s = 1071;
        do
        {
            fputc(s, f);
            s--;
        } while (s >= 1040);
        fclose(f);
    }
    else
    {
        printf("Запись в файл не состоялась\n");
    }
    f = fopen("/home/maksanik/sistprog/lab9/MySymbols.txt", "r");
    if (f != NULL)
    {
        s = fgetc(f);
        while (s != EOF)
        {
            printf("%c", s);
            s = fgetc(f);
        }
        fclose(f);
        printf("\n");
    }
    else
    {
        printf("Не удалось прочитать файл\n");
        return 0;
    }

    return 0;
}