#include <stdio.h>

int main(void)
{
    int (*ptr)[2];
    int torf[2][2] = {12, 14, 16};
    ptr = torf;
    printf("**ptr ====== %d,  **(ptr+1) = %d\n", **ptr, **(ptr + 1));
    printf("torf[0][0] = %d, torf[1][0] = %d\n", torf[0][0], torf[1][0]);
    // 这里注意，如果 ptr 是一个二维数组，那么 **(ptr+1) == arr[1][0];
    return 0;
}
