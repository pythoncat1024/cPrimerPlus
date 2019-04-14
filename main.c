#include <stdio.h>

int main(void)
{
    const int max = 100;
    double r = 0;
    int flag;
    for(int i=1 ; i <= max ; i++)
    {
        if ( i%2 )
            flag = 1;
        else
            flag = -1;
        r += 1.0 / i * flag;
    }
    printf("r = %f\n" , r);
    return 0;
}
