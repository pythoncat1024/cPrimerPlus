#include <stdio.h>

int main(void)
{
    int a = 12;
    int *p = &a;
    int **pt = &p;
    int *(*ptr) = pt;

    printf("p = %p, pt = %p, ptr = %p\n", p, pt, ptr);
    return 0;
}
