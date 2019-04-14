#include <stdio.h>
int main(void)
{
    char abc[] = "abcdefghijklmnopqrstuvwxyz";
    for( int index = 0 ; index < 26 ; index++ )
        printf("%c " , abc[index]);
    return 0;
}
