#include <stdio.h>

void added(int (*arr)[5], int row);
void show(const int (*arr)[5], int row);

int main(void)
{
    int arr[3][5] = {
        {1, 2, 3, 4, 5},
        {2, 4, 6, 8, 10},
        {1, 3, 5, 7, 9}
    };
    printf("show origin:\n");
    show(arr, 3);
    printf("show  added:\n");
    added(arr, 3);
    show(arr, 3);
    return 0;
}

void added(int (*arr)[5], int row)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            arr[i][j] *= 2;
            *(*(arr +i) + j) *=1;
        }
    }
}

void show(const int (*arr)[5], int row)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%4d", *(*(arr + i) + j));
        }
        printf("\n");
    }
}
