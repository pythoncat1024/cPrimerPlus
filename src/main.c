#include <stdio.h>

int main(void)
{
    int arr[6] = {1, 2, 4, 8, 16, 32};
    int sm[100] = { [99] = -1 };
    int st[100] = {[5] = 101, [10] = 101, [11] = 101, [12] = 101, [3] = 101 };

    printf("st %d, %d, %d\n", st[5], st[12], st[3]);
    return 0;
}
