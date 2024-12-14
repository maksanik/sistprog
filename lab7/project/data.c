#include <stdio.h>
#include "../library/mylib.h"


void data(void)
{
    char strs[3][30];
    char *prompts[3] = {"Line 1: ", "Line 2: ", "Line 3: "};
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("%s", prompts[i]);
        fgets(strs[i], sizeof(strs[i]), stdin);
    }
    diagonals('~', 7);
    for (i = 0; i < 3; i++)
    {
        printf("%s", prompts[i]);
        text(strs[i]);
    }
}