#include <stdio.h>

void Temperatures(double);

int main(void) {
    printf("输入一个华氏温度值(非数字退出程序):");
    double hua;
    int sc;
    while ( (sc = scanf("%lf" , &hua)) ==1) {
        Temperatures(hua);
    }
    printf("输入不合法 Done.\n");
    return 0;
}

void Temperatures(double hua) {
    double she,kai;
    const double factor = 5.0 / 9.0;
    const double more = 32;
    const double absolute = 273.16;
    she = factor * (hua - more);
    kai = she + absolute;
    printf("%5.2f 华氏度相当于%5.2f 摄氏度，相当于%5.2f 开氏度.\n \n" ,
            hua , she , kai);
    printf("输入一个华氏温度值(非数字退出程序):");
}
