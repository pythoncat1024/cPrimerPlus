#include <stdio.h>
#include <ctype.h>
#define STOP '#'
#define POINT '.'
#define RP '!'
int main(void)
{
    printf("替换和统计 . ! 出现的次数:\n");
    char ch;
    int replace = 0;
    while( (ch = getchar()) != STOP )
    {
        if( ch == POINT )
        {
            //printf("%c", RP);
            replace++;
        }
        else if ( ch == RP )
        {
            //printf("%c%c", RP, RP);
            replace++;
        }
        else
        {
            //putchar(ch);
            ;
        }
    }
    printf("\n");
    printf("total repalce == %d\n", replace);
    return 0;
}
