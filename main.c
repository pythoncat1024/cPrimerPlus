#include <stdio.h>
#define tax3 0.15
#define tax15 0.20
#define tax_rest 0.25
#define pay 1000
int main(void)
{
    printf("输入一周工作的小时数:\n");
    double time;
    double total = 0;
    double tax = 0;
    double rest = 0;
    scanf("%lf", &time);
    if( time <= 40 ){
        total = time * pay;
    } else {
        total = 40 * pay + (time - 40) * pay;
    }
    if( total <= 300 )
    {
        tax = tax3 * total;
    }else if( total < 300 + 150 )
    {
        tax = tax3 * 300 + (total - 300) * tax15;
    } else {
        tax = tax3 * 300 + 150 * tax15 + (total - 300 -150) * tax_rest;
    }
    rest = total - tax;

    printf("%.1lf hour get money total = %.1lf, tax = %.1lf, rest = %.1lf\n",
            time, total, tax, rest);
    return 0;
}
