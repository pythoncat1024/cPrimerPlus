#include <stdio.h>

#include "utils.h"

int main(void) {
    print_some();
    int input = 13;
    printf("输入正整数，将其转换为二级制显示：");
    scanf("%d", &input);
    printf("%d toBinary equals 0b", input);
    binary(input);
    printf("\n");
    return 0;
}
