#include <stdio.h>
#include <stdlib.h>

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
int main(int argc, char * argv[]) {
    double (*pa)(double,double);

    // 定义函数指针数组
    double (*parr[4])(double,double) = {add, subtract, multiply, divide};
    double added = parr[0](10, 2);
    double multi = (*parr[2])(10, 2);
    printf("added = %g, multi = %g, %d\n", added, multi, parr[3] == divide);
    return 0;
}

double divide(double a, double b) {
    if(b == 0) {
        fprintf(stderr, "divider can not be zero!\n");
        exit(EXIT_FAILURE);
    }
    return a / b;
}
double multiply(double a, double b) {
    return a * b;
}

double subtract(double a, double b) {
    return a - b;
}
double add(double a, double b) {
    return a + b;
}
