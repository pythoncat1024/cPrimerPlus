#include <stdio.h>
#include <string.h>
#define SIZE 191

int main(void)
{

    char line[SIZE] = "hello world!";
    char * two = " don't touch me!";
    printf("before strncat. one=%s, two=%s\n", line, two);
    // 字符串拼接函数
    char * ret = strncat(line, two, SIZE - strlen(two));

    printf("one=%s, two=%s, ret=%s\n", line, two, ret);
    return 0;
}
