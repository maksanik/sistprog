#include <stdio.h>

void rect(char sign, int width, int height) {
    int i, j;

    for (i = 0; i < width; i++) putchar(sign);

    putchar('\n');

    for (i = 0; i < height - 2; i++)
    {
        for (j = 0; j < width; j++)
        {
            if (j == 0 || j == width - 1)
                putchar(sign);
            else
                putchar(' ');
        }
        putchar('\n');
    }

    for (i = 0; i < width; i++) putchar(sign);

    putchar('\n');
}


void diagonals(char sign, int width) {
    int i, j;
    
    for (i = 0; i < width; i++)
    {
        for (j = 0; j < width; j++)
        {
            if (i == j || i + j == width - 1)
                putchar(sign);
            else
                putchar(' ');
        }
        putchar('\n');
    }
}