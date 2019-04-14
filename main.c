#include <stdio.h>

int main(void)
{
    printf("请输入两个整数 m , n ( m < n ): ");
    int m , n;
    scanf("%d %d" , &m , &n);
    long int m2 , m3;
    for( int i = m ; i <= n ; i++ )
    {
        m2 = i * i;
        m3 = i * i * i;
        printf("%3d %6ld %6ld\n" , i , m2 , m3);
    }
    return 0;
}
