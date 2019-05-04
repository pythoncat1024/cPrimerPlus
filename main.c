#include <stdio.h>

void up_and_down(int num);

int main(void)
{
    up_and_down(1);
    return 0;
}

void up_and_down(int count)
{
    printf("B Level %d , location:%p\n", count, &count);
    if( count < 4 ){
        up_and_down(count+1);
    }
    printf("EE LEVEL %d , location:%p\n", count, &count);
}
