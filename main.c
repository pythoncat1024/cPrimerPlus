#include <stdio.h>
#include <ctype.h>

char get_char();

int main(void)
{
    printf("输入任意字符，获取第一个有效字符:\n");
    char c = get_char();
    printf("%c\n", c);
    printf("again:");
    c = get_char();
    printf("%c\n", c);
    return 0;
}

char get_char()
{
    char ch;
    while( (ch = getchar()) != EOF )
    {
        if( isalpha(ch) )
            break;
    }
    while( getchar() !='\n' )
        continue;
    return ch;
}
