#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[]) {
    char food[] = "Yummy";
    char * ptr = food + strlen(food);
    while( --ptr >= food )
        puts(ptr);
    return 0;
}
