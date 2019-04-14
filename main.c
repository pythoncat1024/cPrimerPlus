#include <stdio.h>
#define CHAR '$'
#define COLUMN 6
#define ROW 4
int main(void)
{
    for(int i=0; i<ROW ; i++) {
        for( int j=0;j<COLUMN; j++ ) {
            printf("%c" , CHAR);
        }
        printf("\n");
    }
    return 0;
}
