#include <stdio.h>
#define G 'g'

int main(void) {

    char ch = 'a' -1 ;
    while( ch++ < G ) {
        printf("%5c" , ch);
    }
    printf("\n");
    return 0;
}
