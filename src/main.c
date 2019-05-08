#include <stdio.h>
#include <ctype.h>

int index_of(char ch);

int main(void)
{
    printf("please input a char: ");
    char ch;
    while( (ch = getchar())!=EOF )
    {
        int r = index_of(ch);
        printf("position of %c in abc is %d\n", ch, r);
    }
    return 0;
}

int index_of(char ch)
{
    int index = -1;
    char abc[] = "abcdefghijklmnopqrstuvwxyz";
    if(isalpha(ch))
    {
        for(int i=0; i<26;i++)
        {
            if(tolower(ch) == abc[i])
            {
                index = i+1;
                break;
            }
        }
    }
    return index;
}
