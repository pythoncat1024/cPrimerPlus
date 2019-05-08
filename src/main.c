#include <stdio.h>

void show_point(int x);

int main(void)
{
    int pooh = 24;
    printf("n = %d,&n=%p\n", pooh, &pooh);
    show_point(pooh);
    return 0;
}

void show_point(int n)
{
    printf("IN show_point(): n=%d,&n=%p\n", n, &n);
}
