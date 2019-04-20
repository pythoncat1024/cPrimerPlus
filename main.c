#include <stdio.h>
#include <ctype.h>
#define STOP '#'
int main(void)
{
    printf("随便输入，#号结束:\n");
    char ch;
    int pos = 0;;
    while((ch = getchar()) != STOP )
    {
        if (ch == '\n')
            continue;
        if(pos%8 == 0)
            printf("\n");
        printf("%c,%3d ", ch, ch);
        pos++;

    }
    return 0;
}
