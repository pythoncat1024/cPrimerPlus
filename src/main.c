#include <stdio.h>
#define K 3
void show(const int arr[][K],int row);
void modify(int (*arr)[K],int row, int x);
int main(void)
{
    int rain[4][3] = {
        {7,8,9}, {2,4,6}, {1,3,5}, {4,3,1}
    };
    printf("before modify:\n");
    show(rain, 4);
    modify(rain, 4, 10);
    printf("after modify:\n");
    show(rain, 4);
    return 0;
}

void modify(int (*arr)[K], int row, int x)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < K; j++){
            // arr[i][j] += x;
            *(* (arr + i)+j) += x;
        }
    }
}

void show(const int arr[][K], int row)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < K; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
