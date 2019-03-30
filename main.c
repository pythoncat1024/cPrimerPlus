#include <stdio.h>

int main(void){
    float pre_inch = 2.54F;
    printf("请输入你的身高（单位英寸）：");
    float input;
    scanf("%f",&input);
    float cm = input * pre_inch;
    printf("身高 %.02f inch 相当于 %.02f cm\n", input , cm);
    return 0;
}
