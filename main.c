#include <stdio.h>

int main(void)
{
    printf("请输入预期天数：");
    int days;
    scanf("%d" , &days);

    int count;
    long int sum;
    count = 0;
    sum = 0;
    while (count++ < days)
        sum = sum + count * count;
    printf("总收益为 sum = %ld\n" , sum);

    return 0;
}
