#include <stdio.h>
#include <limits.h>
#include <float.h>

// 观察系统处理整数，浮点数的上溢，下溢
int main(void){
    int i_max = INT_MAX;
    printf("max int : %d , max int plus:%d \n", i_max,i_max+1);
    float f_max = FLT_MAX;
    printf("max float = %f\n# max float puls = %f\n",f_max,f_max+1);
    printf("f_max = %e ### %a \n",f_max,f_max);
    int i_min = INT_MIN;
    float f_min = FLT_MIN;
    printf("i_min=%d,i_min_-1=%d\n",i_min,i_min-1);
    printf("f_min=%.5f,f_min-1=%.5f\n",f_min,f_min-1);
    // --- 格式化输出---
    int age = 26;
    printf("age = %d , %c , %u , %#o , %#x\n",age,age,age,age,age);
    return 0;
}
