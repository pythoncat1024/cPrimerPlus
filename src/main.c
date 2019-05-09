#include <stdio.h>
#include <stdlib.h>
#define YEAR 5
#define MONTH 12
#define MAX 100

// 研究5年的每个月的降水量数据

int main(void)
{
    float rain[YEAR][MONTH] = {};
    for( int i = 0; i < YEAR ; i++ )
    {
        for( int j =0; j < MONTH; j++ )
        {
            // 通过 rand 函数给元素赋值
            rain[i][j] = rand() % MAX;
        }
    }

    float total_m = 0; // 每个月的总降水量
    for(int m = 0; m < MONTH; m++)
    {
        total_m = 0;
        for(int y = 0; y < YEAR; y++)
        {
            total_m += rain[y][m];
        }

        printf(" 第 %d 月的平均降水量为：%g\n", m+1, total_m / YEAR);
    }
    return 0;
}
