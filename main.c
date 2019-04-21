#include <stdio.h>
#define tax3 0.15
#define tax15 0.20
#define tax_rest 0.25
#define PAY 1000

void welcome();

int main(void)
{
    double pay = PAY;
    int select;
    welcome();
    while( 1 != scanf("%d", &select))
    {
        if( select >=1 && select <=5 )
            break;
        printf("输入不正确，请输入正确的数字[1,4]\n");
    }
    switch(select)
    {
        case 5:
            return 0;
            // break;
        case 4:
            pay = 11.2;
            break;
        case 3:
            pay = 10;
            break;
        case 2:
            pay = 9.33;
            break;
        case 1:
            pay = 8.75;
            break;
        default:
            break;
    }
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

    printf("(%.2lf $/hr)%.1lf hour get money total = %.1lf, tax = %.1lf, rest = %.1lf\n",
            pay, time, total, tax, rest);
    return 0;
}

void welcome()
{
    printf("****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) $8.75/hr                     2) $9.33/hr\n");
    printf("3) $10.00/hr                    4) $11.20/hr\n");
    printf("5) quit\n");
    printf("****************************************************************\n");
}
