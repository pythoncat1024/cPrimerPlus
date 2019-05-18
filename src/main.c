#include <stdio.h>

int main(int argc, char * argv[]) {

    printf("参数个数：%d\n", argc);
    for(int i = 0; i < argc; i++) {
        printf("%s\t", argv[i]);
    }
    printf("\n");
    return 0;
}
