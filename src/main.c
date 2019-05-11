#include <stdio.h>

// 两个数组相加，结果存放到第三个数组中
void add(int size, int * target, const int * arr1, const int * arr2);
void show(const int * start, const int * end);

int main(void)
{
    int odd[4] = {1, 3, 5, 7};
    int couple[4] = {2, 4, 6, 8};
    int added[4];
    printf("arr 1: ");
    show(odd, odd + 4);
    printf("arr 2: ");
    show(couple, couple + 4);

    printf("added: ");
    add(4, added, odd, couple);
    show(added, added + 4);
    return 0;
}

void add(int n, int * target, const int * arr1, const int * arr2)
{
    for(int i = 0; i < n; i++)
    {
        *(target +i) = *(arr1 +i) + *(arr2 +i);
    }
}

void show(const int * start, const int * end)
{
    while(start < end)
    {
        printf("%3d", *start++);
    }
    printf("\n");
}
