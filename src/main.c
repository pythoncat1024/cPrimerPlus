#include <stdio.h>
// 深化二维数组的指针操作

int sum(int col, int row ,const int (*arr)[col]); // vla 变长数组{数组长度是变量}
int sum2(const int (*arr)[2], int row);
int main(void)
{
    int rain[3][2] = {
        {1, 2}, {3, 4}, {5, 6}
    };

    printf("sum of rain == %d\n", sum(3, 2, rain));

    printf("sum 2 of rain = %d\n", sum2(rain, 3));

    // 数组的复合字面量表示，类似 double 的字面量 11.24 这种
    printf("sum of complex = %d\n", sum(1,2, (int [2][1]){ {9},{7} }));
    return 0;
}
int sum2(const int (*arr)[2], int row)
{
    int total = 0;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            total += arr[i][j];
        }
    }
    return total;
}

int sum(int col,int row, const int (*arr)[col])
{
    int total = 0;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
           total += *(*(arr + i) + j);
        }
    }
    return total;
}
