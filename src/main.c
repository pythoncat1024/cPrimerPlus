#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * argv[]) {

    if(argc -1 < 2)
        puts("count of args must >= 2");
    else {
        char * end;
        double d = strtod(argv[1], &end);
        long b = strtol(argv[2], &end, 10);
        double r = pow(d,b);
        printf("arg1 = %g, arg2 = %ld, result = %g\n", d, b, r);
    }
    return 0;
}
