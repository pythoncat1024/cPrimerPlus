#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{

    double n = 21;
    printf("input one number to compute it's sqart.\n");
    scanf("%lf", &n);
    for (double x = 1, y = (x + n / x) / 2.0; fabs(x - y) > 0.001;)
    {
        x = y;
        y = (x + n / x) / 2.0;
        printf("n=%.2f\ty=%.5f\tx=%.5f\n", n, y, x);
    }
    return 0;
}
