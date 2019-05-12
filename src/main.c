#include <stdio.h>
#include <string.h>
#define SIZE 10
int main(void)
{
    char line[SIZE];
    puts("请输入一句话:");
    fgets(line, SIZE, stdin);
    // fgets 如果输入小于 SIZE，则保留全部包括'\n'；最后是'\0'
    // 如果输入大于 SIZE, 则SIZE-1 转换为 '\0'

    fputs(line, stdout);
    // fputs 不会在输出的末尾加上'\n', line 里面是什么就输出什么
    printf("use printf: %s\n", line);
    printf("length of line = %lu\n", strlen(line));
    return 0;
}
