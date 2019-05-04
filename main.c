#include <stdio.h>

long int fact(int num);
long int loop_fact(int num);

int main(void)
{
    long int five = fact(5);
    printf("fact 5 = %ld\n", five);
    printf("loop fact 5 = %ld\n", loop_fact(5));
    return 0;
}

long int loop_fact(int num)
{
    long int total = 1;
    for(int i=1; i<=num; i++)
    {
        total *= i;
    }
    return total;
}

long int fact(int n)
{
    if( n<=0 ) {
        return 1;
    } else {
        return n * fact(n-1);
    }
}
