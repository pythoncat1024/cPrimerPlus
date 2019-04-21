#include <stdio.h>
#include <ctype.h>
#define STOP '#'

int main(void)
{
    printf("统计输入中的 'ei' 出现的次数，不包含单引号:\n");
    char ch, prev;
    prev = ' ';
    int ei = 0;
    while( ( ch = getchar() ) != STOP )
    {
        if( 'e' == prev && 'i' == ch ){
            ei++;
        }
        prev = ch;
    }

    while( getchar() != '\n' )
        continue;

    printf("count if 'ei' = %d\n", ei);
    return 0;
}
