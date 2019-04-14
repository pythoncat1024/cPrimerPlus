#include <stdio.h>

int main(void)
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    for(int i=8-1 ; i>=0 ; i--)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
