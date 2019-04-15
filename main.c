#include <stdio.h>
#define LENGTH 255
int main(void)
{
    printf("请输入一行文字:");
    char str[LENGTH];
    int pos = 0;
    int read;
    while( pos < LENGTH
            && ( read = scanf("%c" , &str[pos]) ) == 1
            && str[pos] != '\n')
    {
        pos++;
    }
    printf(" pos == %d\n" , pos);
    if( pos == LENGTH )
        str[pos-1] = '\0';
    else
        str[pos] = '\0';

    printf("%s\n", str);
    return 0;
}
