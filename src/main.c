#include <stdio.h>
#include <ctype.h>
// 将3个数值从小到大重新赋值给3个变量
void sort(double * a, double * b,double * c);
double min(double a, double b, double c);
double max(double a, double b, double c);
double diff(double a,double b, double c, double d, double e);
int main(void)
{
    printf("please input 3 double num: ");
    double a,b,c;
    char ch;
    while( 3 != scanf("%lf %lf %lf", &a, &b, &c))
    {
        while( (ch = getchar()) !='\n' )
            putchar(ch);
        printf(" is not 3 valid num.\nplease try again: ");
    }
    printf("origin nums are %g,%g,%g\n", a, b, c);
    sort(&a , &b, &c);
    printf("after large nums are %g,%g,%g\n", a, b, c);
}

void sort(double * a,double * b,double * c)
{
    double min1 = min(*a, *b, *c);
    double max1 = max(*a, *b, *c);
    double t = diff(*a, *b, *c, min1,max1);

    *a = min1;
    *b = t;
    *c = max1;
}

double min(double a, double b,double c)
{
    double x = a < b ? a : b;
    return x < c ? x : c;
}
double max(double a, double b, double c)
{
    double xx = a > b ? a : b;
    return xx > c ? xx : c;
}
double diff(double a, double b, double c, double d, double e)
{
    double k;
    if( a != d && a != e )
        k = a;
    else if( b !=d && b != e )
        k = b;
    else
        k = c;
    return k;
}
