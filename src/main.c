#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{

    double n;
    printf("input one number to compute it's sqart.\n");
    scanf("%lf",&n);
    double x = 1, y = (x + n / x) / 2.0;
    do
    {
        x = y;
        y = (x + n / x) / 2.0;
        printf("n=%.2f\ty=%.5f\tx=%.5f\n", n, y, x);
    } while (x - y > 0.001);

    printf("FINAL: n=%.2f\ty=%.5f\tx=%.5f\n", n, y, x);

    return 0;
}
