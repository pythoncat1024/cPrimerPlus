#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

char b = 2;
void y()
{
    // printf("%d\n", a); // error
    printf("b = %d\n", b);
}
a = 1;
void x()
{
    int c = 3;
    int static d = 4;
    printf("a =%d, b=%d, c=%d, d=%d\n", a, b, c, d);
}
int main(int argc, char *argv[])
{
    x();
    y();
    return 0;
}
