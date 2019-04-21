#include <stdio.h>

int isPrime(int num);
int main(void)
{
    printf("请输入正整数 n , <=0 to quit: ");
    int num;
    int start = 2;
    while( 1 == scanf("%d", &num) && num >0 )
    {
        for(int i = start; i <= num; i++)
        {
            if(isPrime(i))
                printf("%d ", i);
        }
        printf("\n");
        printf("下一个正整数? ");
    }
    printf("\n");
    printf("illegal input, quit.\n");

    return 0;
}

int isPrime(int num)
{
    int prime = 1;
    if( num < 2 )
        return 0; // 不是素数
    for(int k = 2; k * k <= num; k++)
    {
        if( num % k == 0 )
        {
            prime = 0;
            break;
        }
    }
    return prime;
}
