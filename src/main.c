#include <stdio.h>
#include <ctype.h>

double avg(double a, double b);
int main(void)
{
    printf("input two double num: ");
    double a,b;
    char ch;
    while( 2 != scanf("%lf %lf", &a, &b) )
    {
        while( (ch = getchar()) !='\n')
            putchar(ch);
        printf(" is not two valid num.\nplease try again: ");
    }
    double rt = avg(a,b);
    printf("the avg of %g,%g is %g\n", a, b, rt);
    return 0;
}

double avg(double a,double b)
{
    double x = 1/a;
    double y = 1/b;
    double z = (x+y) / 2;
    return 1/z;
}

