#include <stdio.h>

void show(const int * arr, int size);
void multi(int * arr,int size, int x);
int main(void)
{
    int arr[3] = { 6, 3, 1 };
    printf("before:\n");
    show(arr, 3);
    printf("after:\n");
    multi(arr, 3, 10);
    show(arr, 3);
    return 0;
}
void multi(int * arr,int size,int x)
{
    for(int i = 0; i < size; i++)
    {
        *(arr + i) += x;
    }
}

void show(const int * arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%3d", *(arr + i));
    }
    printf("\n");
}
