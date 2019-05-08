#include <stdio.h>

// 交换两个变量的值
void swap(int* a,int* b);
int main(void)
{
    int a = 13;
    int b = 27;

    printf("origin val: a=%d,b=%d\n", a, b);
    swap(&a, &b);
    printf("after swap: a=%d,b=%d\n", a, b);
    return 0;
}

void swap(int* x, int* y)
{
    int temp = *x;
    // 由 *x = *y 也可以看出 解引用对应的数据可以是左值，也可以是右值
    *x = *y;
    *y = temp;
}

