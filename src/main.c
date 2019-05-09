#include <stdio.h>

int main(void)
{
    int zoo[23] = {};
    int rain[4] = {1, 2};
    const int * ptr = rain; // ptr 被称为：指向 const 指针
    int * const p = rain; // p 被称为：const 指针
    p[1] = 32; // ok
    // p = zoo; // 编译失败， const 指针，不能被二次赋值。
    return 0;
}
