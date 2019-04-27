#include <stdio.h>

int main(void)
{
    printf("input anything\n");
    char ch;
    while( (ch = getchar()) != EOF )
    {
        putchar(ch);
    }
    return 0;
}
