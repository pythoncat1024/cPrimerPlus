#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("随便你怎么输入，我只识别第一个字符，#结束:\n");
    char ch;

    while( (ch = getchar()) != '#' )
    {
        if (ch == '\n')
            continue;
        switch(ch)
        {
            case 'a':
                printf("char === %c\n",ch);
                break;
            case 'b':
                printf("char === %c\n", ch);
                break;
            default:
                break;
        }

        while(getchar() != '\n')
            continue; // 直接不处理，再次进入小小循环
    }
    printf("last char = %c\n , Done!\n", ch);
    return 0;
}
