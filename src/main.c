#include <stdio.h>

void oneline(int * arr, int n);
int max(int * arr, int n);
int main(void)
{
    int arr[5] = {23, 12, 37, 4, 9};
    int m = max(arr, 5);
    printf("max in arr[");
    oneline(arr, 5);
    printf("] =  %d\n", m);
    return 0;
}
void oneline(int * arr,int n)
{
    for(int i = 0; i < n; i++)
    {
        if( i == n-1 )
            printf("%4d", *(arr + i));
        else
            printf("%4d,", *(arr + i));
    }
}
int max(int * arr, int n)
{
    int max = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
