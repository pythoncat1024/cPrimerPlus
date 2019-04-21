#include <stdio.h>
#include <ctype.h>
#define STOP 0
int main(void)
{
    printf("请输入整数啊:\n");
    int num;
    int n1 = 0;
    int n2 = 0;
    int total_n1 = 0;
    int total_n2 = 0;
    while( scanf("%d", &num) ==1 && num != 0 )
    {
        if( num % 2 == 0 )
        {
            n2++;
            total_n2 += num;
        }
        else
        {
            n1++;
            total_n1 += num;
        }
    }
    while( getchar() !='\n' )
        continue;
    printf("n2 = %d , n1 = %d , avg n2 = %.1f , avg n1 = %.1f\n",
            n2, n1, 1.0f*total_n2/n2, 1.0f*total_n1/n1);
    return 0;
}
