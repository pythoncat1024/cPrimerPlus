#include <stdio.h>
#define SIZE 8

double sum_arr(int index);

int main(void)
{
    double arr1[SIZE];
    double arr2[SIZE];
    double tmp;
    printf("请依次输入%d个数.\n", SIZE);
    for( int i = 0; i < SIZE; i++ )
    {
        printf("请输入第 %d 个数: ", i+1 );
        scanf("%lf" , &arr1[i]);

        tmp = 0;
        for(int k  = 0; k <= i; k++ ){
            tmp += arr1[k];
        }
        arr2[i] = tmp;
    }
    for(int i = 0; i < SIZE; i++)
    {
        printf("%8.2f", arr1[i]);
    }
    printf("\n");
    for(int i = 0; i < SIZE; i++)
    {
        printf("%8.2f" , arr2[i]);
    }
    printf("\n");
    return 0;
}
