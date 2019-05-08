#include <stdio.h>

double min(double x,double y);
int main(void)
{
    double a = 23;
    double b = 21;
    printf("min in %g,%g is %g\n", a, b, min(a,b));
    return 0;
}
double min(double xx,double yy)
{
    return xx > yy ? yy : xx;
}
