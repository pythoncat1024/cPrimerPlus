#include <stdio.h>

int main(void)
{
    printf("统计输入的字符数:\n");
    char ch;
    int count = 0;
    while( (ch = getchar()) != EOF )
    {
        count++;
    }
    printf("count of input = %d\n", count);
    return 0;
}
