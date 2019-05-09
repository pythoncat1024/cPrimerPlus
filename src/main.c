#include <stdio.h>

// 三维数组的求和尝试

int sum3(int x, int y, int z, int (*arr)[y][z]); // 使用变长数组
int main(void)
{
    int rain[3][2] = {
        {1,2},{3,4},{5,6}
    }; // 二维数组
    int zoo[2][3][4] = {
        1,2,3,4, 1,2,3,4, 1,2,3,4,
        5,6,7,8, 5,6,7,8, 5,6,7,8
    }; // 三维数组
    printf("sum of three arr = %d\n", sum3(2, 3, 4, zoo));
}

int sum3(int x,int y,int z, int arr[][y][z])
{
    int total = 0;
    for(int a = 0; a < x; a++)
    {
        for(int b = 0; b < y; b++)
        {
            for(int c = 0; c < z; c++)
            {
               total += *(*(*(arr + a) + b) +c);
               // 等同于 total += arr[a][b][c];
            }
        }
    }
    return total;
}
