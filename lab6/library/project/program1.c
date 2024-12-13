#include <stdio.h>

int hello();

int main()
{
    int x = hello();
    printf("Return code: %d\n", x);
    return 0;
}

