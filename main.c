#include <stdio.h>
#define FIVE 10000
#define ORIGIN 100 * FIVE
#define TAKE 10 * FIVE
#define PERCENT 0.08

int main(void)
{
    int year = 0;
    double rest = ORIGIN;
    while(rest >= TAKE)
    {
        year++;
        rest += rest * PERCENT;
        rest -= TAKE;
    }

    printf("after %d years , Lucky will rest %.2f$ \n" ,
            year , rest);
    return 0;
}
