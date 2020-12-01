#include <stdio.h>
#include <stdlib.h>

#define LINE '\n'

int main(int argc, char *argv[])
{
    printf("%s\n", "input any long lines,you can:");
    int ch;
    int curr = 1, last = 0;
    while ((ch = getchar()) != EOF)
    {
        if (ch == LINE)
        {
            curr += 1;
        }
        else
        {
            if (curr > last)
            {
                printf("\t%d: ", curr);
            }
            if (last != curr)
            {
                last = curr;
            }
        }
        putchar(ch);
    }

    return EXIT_SUCCESS;
}

// fffhhhh\n
// 1fffhhhh\n
// dsdsddsd\n
// 2
