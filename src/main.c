#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/increment.h"
#include "../include/negate.h"

int main(int argc, char *argv[])
{

    int a = 10, b = 0, c = -10;
    int ia = increment(a);
    int ib = increment(b);
    int ic = increment(c);

    int na = negate(a);
    int nb = negate(b);
    int nc = negate(c);

    printf("increment %d=%d,%d=%d,%d=%d\n", a, ia, b, ib, c, ic);
    printf("negate %d=%d,%d=%d,%d=%d\n", a, na, b, nb, c, nc);
    return 0;
}
