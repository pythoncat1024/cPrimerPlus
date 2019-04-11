#include <stdio.h>
#include <math.h>

double m3(double src);

int main(void) {
    printf("输入一个数字，得到其的立方值：");
    double input;
    scanf("%lf" , &input);
    double result = m3(input);

    printf("%.2f 's m3 == %.2f\n" , input ,result);
    return 0;
}

double m3(double src) {
    return pow(src,3);
}
