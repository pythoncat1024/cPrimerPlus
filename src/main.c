#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[]) {
    char ch = 'c';
    char * ptr = "c";
    printf("%zd, %zd\n", sizeof(ch), sizeof(ptr));
    printf("%zd, %zd\n", sizeof((char)'q'), sizeof((char *)"q"));
    printf("%zd, %zd\n", sizeof('q'), sizeof("q"));
    return 0;
}
