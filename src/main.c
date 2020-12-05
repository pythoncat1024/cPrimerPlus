#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEFT '{'
#define RIGHT '}'

int match(int a, int b)
{
    return a == b;
}

void checkBraces()
{
    int ch;
    int f = 0, s = 0;
    int stopLeftcollect = 0;
    int earlyFail = 0;
    // 两种情况，一种： {a{b{c}d}e}
    // 这种的处理方式就很简单，就是遇到第一个 } 就停止对{ 进行计数，并开始对 } 进行计数，结束后比较二者数量即可。
    // 两种情况，二种： {s}{w}{k}
    // 这种需要在第二个 { 的时候就比较前一次 的 {,}的数量然后清空计数再次分别统计。
    while ((ch = getchar()) != EOF && ch != '\n')
    {
        if (LEFT == ch)
        {
            if (s > 0)
            {
                if (s <= f)
                {
                    f = 1 + (f - s);
                    stopLeftcollect = 0;
                    s = 0;
                }
                else
                {
                    printf("======= current line braces match FAIL#\n");
                    earlyFail = 1;
                    break;
                }
            }
            else
            {
                if (!stopLeftcollect)
                {
                    f++;
                }
            }
        }
        else if (RIGHT == ch)
        {
            stopLeftcollect = 1;
            s++;
        }

        // putchar(ch);
    }
    printf("EXIT WHILE $$$$$$.\n");
    if (!earlyFail)
    {

        if (f == s)
        {
            printf("======= #current line braces match ok\n");
        }
        else
        {
            printf("======= #current line braces match FAIL#\n");
        }
    }
    while (earlyFail && (ch = getchar()) != '\n')
    {
        ;
    }
    if (ch == '\n')
    {
        printf("NEXT LINES\n");
        checkBraces();
    }
    else
    {
        printf("who you are? %c\n", ch);
        // logic error.
        exit(EXIT_FAILURE);
    }
}

int main(int argc, char *argv[])
{

    printf("check match of braces. INPUT:\n");
    checkBraces();
    return 0;
}
