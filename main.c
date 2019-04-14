#include <stdio.h>
#include <math.h>
int main(void)
{
    int arr[8];
    for(int i=0; i<8 ; i++)
    {
        arr[i] = (int) pow(2,i);
    }

    int pos = 0;
    do
    {
        printf("arr[%d] = %d\n" , pos , arr[pos]);
        pos++ ;
    } while(pos < 8);
    return 0;
}
