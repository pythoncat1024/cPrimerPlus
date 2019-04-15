#include <stdio.h>
#define ORIGIN 100
#define TEN 10
#define FIVE 5
int main(void)
{
    double dei = ORIGIN; // 5%
    double dap = ORIGIN; // 10%

    int year = 0;
    while(dap >= dei)
    {
        year++;
        dap += ORIGIN * 0.1;
        dei += dei * 0.05;
    }
    printf("after %d years, dei will over dap. dap=%.2lf ,dei=%.2lf\n" ,
            year , dap , dei);
    return 0;
}
