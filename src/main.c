#include <stdio.h>
#include <string.h>
#define SIZE 191

int main(void)
{

    char line[SIZE] = "hello world!";
    char * two = "duck like java, but cat like python more";
    printf("before#one=%s, two=%s\n", line, two);
    // 字符串拷贝函数 相当于Java 中 String ss = str; // str 赋值给 ss
    char * ret = strcpy(line, two);
    printf("one=%s, two=%s, ret=%s\n", line, two, ret);
    return 0;
}
