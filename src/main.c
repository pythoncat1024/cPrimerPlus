#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {

    char * end;
    long num;
    printf("参数个数：%d\n", argc);
    for(int i = 0; i < argc; i++) {
        num = strtol(argv[i], &end, 10);
        printf("arg[%d] = %s,%ld, end with:%s\n", i, argv[i], num, end);
    }
    printf("\n");
    return 0;
}
