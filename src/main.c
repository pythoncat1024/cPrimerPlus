#include <stdio.h>
#include <stdlib.h>

char h = 'd';
static char k = 'z';

int main(void) {

    puts("input a number:");
    int x;
    register int y;
    scanf("%d", &x);
    // register var 不能访问其地址
    int *arr;
    arr = (int *) malloc(sizeof(int) * 10);
    arr[0] = 12;
    arr[1] = 23;
    free(arr);
    arr = (int *) calloc(sizeof(int), 8);
    arr[5] = 33;
    arr[6] = 44;
    free(arr);
    static int m = 33;
    extern char h;
    h = 'e';

    char *restrict str = (char *) malloc(sizeof(char) * 6);
    // restrict var 只能通过指针访问
    *str = 'a';
    *(str + 1) = 'b';
    y = 29;
    printf("%c, %d, %d, %s\n", h, y, k, str);
    free(str);
    int *am = (int *) malloc(sizeof(int) * 21);
    free(am);
    return 0;
}
