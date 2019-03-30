#include <stdio.h>

// 一个水分子的质量大约是 3.156e-23克，1夸脱水大约是950克。输入夸脱数，输出水分子数量
int main(void){
    float weight = 3.156e-23F;
    float pre_num = 1.0F/weight; // 1克水含有多少个水分子
    float input;
    printf("输入水的数量：（单位夸脱）");
    scanf("%f",&input);
    float total = pre_num * input;
    printf("%.02f 夸脱的水中含有水分子的数量为：%.03e\n",input,total);
    return 0;
}
