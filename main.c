#include <stdio.h>

int main(void){
    long double one_year = 3.156e7; // 一年有多少秒
    int age;
    printf("请输入你的年龄：");
    scanf("%d",&age);
    long double total_seconds = age*one_year;
    printf("%d age == %.2Lf secnonds ==== %Le === %La\n",age,total_seconds,total_seconds,total_seconds);
    return 0;
}
