#include <stdio.h>
#include <string.h>
#include "../include/utils.h"
#define SIZE 10

int main(void)
{

    char line[SIZE];
    puts("请输入一句话:");
    char const * ptr = s_gets(line, SIZE);
    printf("use puts to print inputed line:\n");
    puts(line);
    printf("length of line  = %lu\n", strlen(line));
    printf("the result of s_gets() = %s\n", ptr);
    return 0;
}
