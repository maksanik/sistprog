#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char s = 'A';
    int k;
    FILE *f = fopen("MyData.txt", "w+");
    if (f)
    {
        while (s <= 'K')
        {
            fprintf(f, "%c - %d\n", s, s);
            s++;
        }
        rewind(f);
        while (!feof(f))
        {
            fscanf(f, "%c - %*d\n", &s);
            printf("| %c ", s);
        }
        printf("|\n");
        rewind(f);
        while (!feof(f))
        {
            fscanf(f, "%*c - %d\n", &k);
            printf("| %d ", k);
        }
        printf("|\n");
        fclose(f);
    }
    else
    {
        puts("Не удалось открыть файл");
    }

    return 0;
}