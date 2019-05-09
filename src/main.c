#include <stdio.h>
#define SIZE 4

int sum(int * arr, int n);
int sum_arr(int * start, int * end);
int main(void)
{
    int arr[SIZE] = {5, 6, 7, 8};
    printf("sum of arr = %d\n", sum(arr, SIZE));
    // c 编译器实现保证了 arr + SIZE 对应的地址可以访问，但是对应的值未定义！
    printf("sum_arr = %d\n", sum_arr(arr,arr + SIZE));
}

int sum_arr(int * start, int * end)
{
    int total = 0;
    while(start < end)
    {
        total += *start++;
        // total += *start++; ===> total += *start; start++;
    }
    return total;
}
int sum(int * arr,int n)
{
    int total = 0;
    for(int i = 0; i < n; i++)
    {
        total += *(arr + i);
        // 指针+1，1对应的是一个元素长度
    }
    return total;
}

