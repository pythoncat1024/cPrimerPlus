#include <stdio.h>

int main(void) {
    int num;
    printf("请随便输入一个整数，我将打印[n,n+10]：");
    scanf("%d" , &num);
    const int max = num + 10;
    while (num <= max) {
        printf("%d\t", num);
        num++;
    }
    num--;
    printf("\n");
    return 0;
}
