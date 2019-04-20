#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("随便输入，#号结束:\n");
    char ch;
    int n_spaces = 0;
    int n_lines = 0;
    int n_others = 0;
    while( (ch = getchar()) != '#' )
    {
        if(isspace(ch) && ch !='\n')
            n_spaces++;
        else if( ch == '\n' )
            n_lines++;
        else
            n_others++;
    }
    printf("this input contains %d space and %d lines and %d others\n",
            n_spaces, n_lines, n_others);
    return 0;
}
