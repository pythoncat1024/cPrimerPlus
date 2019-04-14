#include <stdio.h>

int main(void)
{
    printf("请输入两个浮点数, 间隔一个空格: ");
    float a , b;
    float r;
    while ( 2 == scanf("%f %f" , &a , &b) )
    {
        r = (a-b) / (a*b);
        printf("result of [(%.2f - %.2f) / (%.2f * %.2f)] = %.2f\n" ,
                a , b , a ,b ,r);
    printf("请输入两个浮点数, 间隔一个空格: ");
    }
    printf("非法输入 Done. \n");
    return 0;
}
