#include <stdio.h>
#include <string.h>
#include <float.h>

int main(void){
    double d = 1.0/3.0;
    float f = 1.0f/3.0f;
    const float ff = FLT_DIG;
    const double dd = DBL_DIG;
    printf(".6: %.6f , %.6f\n" , f , d);
    printf(".12: %.12f , %.12f\n" , f , d);
    printf(".16: %.16f , %.16f\n" , f , d);
    printf("const: %g , %G\n", ff , dd);
    return 0;
}
