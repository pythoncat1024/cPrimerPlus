#include <stdio.h>
#include <ctype.h>
int main(void)
{
    printf("请输入任意一串字符:");
    char ch;
    // ( ch = getchar ) != -1 ; 加括号的原因是赋值运算符优先级最低，低于比较运算符
    while( ( ch = getchar() ) != '\n' )
    {
        if( isalpha(ch) )
        {
             putchar( ch+1 );
        }
        else
        {
            putchar( ch );
        }
    }
    putchar( ch );
    return 0;

}
