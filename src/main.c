#include <stdio.h>
#include <string.h>
#define SIZE 191

int main(void)
{

    char line[SIZE] = "hello world!";
    char * ptr = "duck like java more.";
    char ch = 'e';
    char * index = strchr(line, ch);
    char * index2 = strchr(ptr, ch);
    printf("index = %s, index2 = %s\n", index, index2);
    char * ss = strchr("duck", 'A');
    printf(" find 'A' in \"duck\" = %s\n", ss);
    return 0;
}
