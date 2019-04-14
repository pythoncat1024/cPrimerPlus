#include <stdio.h>
#define A 'A'
#define ROW 6

int main(void)
{
    char i , c , j ;
    for( i = 0 , c = A ; i < ROW ; i++ )
    {
        for ( j = 0; j <= i ; j++ , c++ )
        {
            printf("%c" , c);
        }
        printf("\n");
    }
    return 0;
}
