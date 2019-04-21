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
        switch( ch )
        {
            case POINT:
                //printf("%c", RP);
                replace++;
                break;
            case RP:
                //printf("%c%c", RP, RP);
                replace++;
                break;
            default:break;
        }
    }
    printf("\n");
    printf("total repalce == %d\n", replace);
    return 0;
}
