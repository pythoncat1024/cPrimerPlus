#include <stdio.h>
#include <ctype.h>
// 将 n 转换为 x进制的数显示出来
void to_base_n(int n, int x);
int main(void)
{
    printf("请输入要转换的数字，以及目标进制。（比如85 2 表示的是将 85 转成二级制显示）: ");
    int n,x;
    int ch;
    while( 2 != scanf("%d %d", &n, &x) )
    {
        while( (ch = getchar())!='\n' )
        {
            putchar(ch);
        }
        printf(" is not two number.\nplease try again: ");
    }
    if( x < 2 )
    {
        printf("至少应该是二进制，否则无法转换！");
        return 0; // exit this method
    }
    printf("%d 的 %d进制表示为：", n, x);
    to_base_n(n,x);
    printf("\n");
    return 0;
}

void to_base_n(int n,int x)
{
    int k = n % x;
    int tmp = n / x;
    if( tmp > 0 )
    {
        to_base_n(tmp, x);
    }
    printf("%d",k);
}
