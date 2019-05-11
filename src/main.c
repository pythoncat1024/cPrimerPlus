#include <stdio.h>

int main(void)
{
    int * ptr;
    int torf[2][2] = {12, 14, 16, 18};
    ptr = torf[0];
    printf("*ptr = %d? , *(ptr+2) = %d? , %d\n", *ptr, *(ptr + 2), *(ptr + 3));
    printf("(ptr + 2) = %p, &torf[1][0] = %p\n", (ptr + 2), &torf[1][0]); // 二者相等
    // 从这里可以看出，二维数组在内存中跟一维数组是一样的，也是接着开辟内存的
    return 0;
}
