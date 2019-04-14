#include <stdio.h>
#define LAST 'A'
#define CHAR 'F'
int main(void)
{
    for( char i = CHAR ; i >= LAST  ; i-- )
    {
        for( char j = CHAR ; j >= i ; j-- )
        {
            printf("%c" , j);
        }
        printf("\n");
    }
    return 0;
}
