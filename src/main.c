#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

double power(double a, int b);
int main(void)
{
    printf("请输入一个数，及其幂（比如2,3 表示2的3次方）: ");
    double x;
    int y;
    char ch;
    while( 2 != scanf("%lf %d", &x, &y) )
    {
        while( (ch = getchar())!='\n' )
            putchar(ch);
        printf(" is not 2 valid number.\nplease try again:");
    }
    double d = power(x, y);
    printf("%g 的%d 次方 = %g\n", x, y, d);
    return 0;
}

double power(double a, int b)
{
    double d = 1;
    if( a == 0 )
    {
        printf("0 的幂次未定义，不可计算！");
        d = 0;
    }
    else
    {
        d = 1;
        for(int i = 0; i < abs(b); i++)
        {
            d *= a;
        }
        if(b < 0)
        {
            d = 1.0/d;
        }
    }
    return d;
}
