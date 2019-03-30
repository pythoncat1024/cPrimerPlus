#include <stdio.h>

// 编写一个程序，把年龄换成天数，不考虑闰年
int main() {
    int age = 29;
    int days = age*365;
    printf("age %d equals %d days",age,days);
    return 0;
}
