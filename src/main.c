#include <stdio.h>
#define SIZE 5
// 数组排序
void sort(double * arr, int n, int desc);
void show(const double * arr, int n);

int main(void)
{
    double arr[SIZE] = {23.1, 34.2, 15.4, 56.3, 9};
    printf("origin arr     :");
    show(arr, SIZE);
    sort(arr, SIZE, 0);
    printf("sorted arr aesc:");
    show(arr, SIZE);
    printf("sorted arr desc:");
    sort(arr, SIZE, 1);
    show(arr, SIZE);
    return 0;
}

void sort(double * arr, int n, int desc)
{
    // 倒序排列数组元素
    double temp;
    double s;
    for(int i = 0; i < n; i++)
    {
        temp = arr[0];
        for(int j = 1; j < n-i; j++)
        {
            int condition = desc ? (temp < arr[j]) : (temp > arr[j]);
            if(condition)
            {
                s = arr[j - 1];
                arr[j-1] = arr[j];
                arr[j] = s;
            }
            temp = arr[j];
        }
    }

}

void show(const double * arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(i == n -1)
            printf("%5g",arr[i]);
        else
            printf("%5g,", arr[i]);
    }
    printf("\n");
}
