#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int isPrimeNumber(int n)
{
    int bingo = 0;
    for (int i = 2; i < n / 2 + 1; ++i)
    {
        if (n % i == 0)
        {
            bingo = 1;
            break;
        }
    }
    return bingo ? 0 : 1;
}

int main(int argc, char *argv[])
{

    printf("check one number is a  prime number or not:\n");
    int count = 0;
    // 质数是指在大于1的自然数中，除了1和它本身以外不再有其他因数的自然数。
    for (int i = 2; i < 100; ++i)
    {
        // printf("i===%d\n", i);
        int isPrime = isPrimeNumber(i);
        if (isPrime)
        {
            printf("%d\t", i);
            ++count;
            if (count % 8 == 0)
            {
                printf("\n");
            }
        }
    }
    return 0;
}
