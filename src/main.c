#include <stdio.h>
#define SIZE 109

int main(void)
{

    char line[SIZE] = "hello world!";

    puts(line);
    puts(line + 4); // 字符串处理函数都可以这样改变处理位置
    return 0;
}
