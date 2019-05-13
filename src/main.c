#include <stdio.h>
#include <string.h>
#define SIZE 191

int main(void)
{

    char line[SIZE] = "hello world!";
    char * ptr = "duck like java more.";
    printf("before:line = %s\n", line);
    int ret = sprintf(line, "%s 哈哈#霓虹# %d , ptr=%p", ptr, 32, ptr);
    printf("after sprintf:\nline = [%s], ret = %d\n", line, ret);
    return 0;
}
