#include <stdio.h>
#include "../include/utils.h"

int main(int argc, char * argv[]) {

    char str[] = "hello world!";
    printf("origin:%s\n", str);
    char *ss = strrevert(str);
    printf("reverted:%s,%s\n", str, ss);
    return 0;
}
