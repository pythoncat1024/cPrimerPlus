#include <stdio.h>

int main(void)
{
    char ch;
    int count = 0;
    while( (ch = getchar()) != EOF )
    {
        count++;
    }
    printf("count of input = %d\n", count);
    return 0;
}
