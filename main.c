#include <stdio.h>
#define LEN 5
#define CHAR '$'
int main(void)
{
    for( char i = 0 ; i < LEN ; i++ )
    {
        for( char j = 0; j <= i ; j++ )
        {
            printf("%c" , CHAR);
        }
        printf("\n");
    }
    return 0;
}
