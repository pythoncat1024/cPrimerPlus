#include <stdio.h>
#include <string.h>
#include "../include/utils.h"
#define SIZE 109

int main(void)
{

    char line[SIZE];
    puts("随便输入，空行结束:");
    char * ptr;
    while((ptr = s_gets(line, SIZE)) != NULL)
        puts(ptr);

    puts("Done.");
    return 0;
}
