#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEFT '{'
#define RIGHT '}'

int match(int a, int b)
{
    return a == b;
}

void check(char *str)
{
    int len = strlen(str);
    int ch;
    int f = 0, s = 0;
    int stopLeftcollect = 0;
    int earlyFail = 0;
    for (int i = 0; i < len; ++i)
    {
        ch = str[i];
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
    }

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
}

int main(int argc, char *argv[])
{

    char str[1000];
    while (gets(str) != NULL)
    {
        printf("origin: %s\n", str);
        check(str);
    }

    return 0;
}
