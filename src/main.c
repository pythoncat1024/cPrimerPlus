#include <stdio.h>

// 打印输出数组
void oneline(double * arr, int n);
// 返回最大元素下标
int max_of_index(double *arr, int n);
int main(void)
{
    double arr[5] = {23.4, 12.4, 37.4, 4.4, 9.4};
    int index = max_of_index(arr, 5);
    printf("max ele index in arr[");
    oneline(arr, 5);
    printf("] =  %d\n", index);
    return 0;
}
int max_of_index(double * arr, int n)
{
    double max = arr[0];
    int index = 0;
    for(int i = 0; i < n; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
            index = i;
        }
    }
    return index;
}
void oneline(double * arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        if( i == n-1 )
            printf("%4g", *(arr + i));
        else
            printf("%4g,", *(arr + i));
    }
}

