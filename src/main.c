#include <stdio.h>
#include <string.h>
#define SIZE 191

int main(void)
{

    char line[SIZE] = "hello world!";
    char * two = "Hello world!";
    int ret = strcmp(line, two);
    printf("one=%s, two=%s, ret=%d\n", line, two, ret);
    return 0;
}
