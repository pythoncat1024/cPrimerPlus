#include <stdio.h>
#include <ctype.h>

void chline(char ch, int i,int j);
int main(void)
{
    chline('s',3,5);
   return 0;
}

void chline(char c, int i, int j)
{
    for(int x = 0; x < j; x++)
    {
        for(int y = 0; y < i; y++)
        {
            putchar(c);
        }
        putchar('\n');
    }
}

