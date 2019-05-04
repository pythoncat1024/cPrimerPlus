#include <stdio.h>

void binary(int num);

int main(void)
{
    int input = 13;
    printf("输入正整数，将其转换为二级制显示：");
    scanf("%d", &input);
    printf("%d toBinary equals 0b", input);
    binary(input);
    printf("\n");
    return 0;
}

// 逻辑就是，将一个数 %2 ，得到第一位，然后将该数 /2 ，再次 %2，得到第二位
// 通过递归刚好做到倒序打印，即先打印最后以为，再以此向前打印
void binary(int n)
{
    if( n > 1 ){
        binary( n/2 );
    }
    printf("%d", n%2);
}
