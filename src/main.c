#include <stdio.h>

int main(void)
{
    int zoo[23] = {};
    int rain[4] = {1, 2};
    const int * ptr = rain; // ptr 被称为：指向 const 指针

    printf("ptr = %p, *ptr = %d\n", ptr, *ptr);
    // ptr++;
    ptr += 1; // ok
    // 说明 指向const 指针可以被改变。
    // *ptr = 66;  // 编译失败, const 指针不能去改变值
    ptr = &zoo[0]; // ok 再次说明指向 const 指针可以被改变，只是不能改变值
    printf("after ++ ptr = %p, *ptr = %d\n", ptr, *ptr);
    return 0;
}
