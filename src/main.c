#include <stdio.h>
#include <ctype.h>
// 将较大的一个重新赋值给两个变量
void large_of(double * a, double * b);

int main(void)
{
    printf("please input two double num: ");
    double a,b;
    char ch;
    while( 2 != scanf("%lf %lf", &a, &b))
    {
        while( (ch = getchar()) !='\n' )
            putchar(ch);
        printf(" is not two valid num.\nplease try again: ");
    }
    printf("origin nums are %g,%g\n", a, b);
    large_of(&a ,&b);
    printf("after large nums are %g,%g\n", a, b);
}

void large_of(double * a,double * b)
{
    double max = *a > *b ? *a : *b;
    *a = max;
    *b = max;
}
