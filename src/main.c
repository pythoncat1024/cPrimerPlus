#include <stdio.h>
#define SIZE 40
int main(void)
{
    char line[SIZE];
    puts("请输入一句话:");
    gets(line);
    // gets(char *) 可以获取一个输入的字符串内容，但是对于长度没有控制，不安全
    puts(line);
    return 0;
}
