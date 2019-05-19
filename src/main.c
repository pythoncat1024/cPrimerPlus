#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../include/utils.h"
#define SIZE 40
char * drop_space(char * src);

int main(int argc, char * argv[]) {
    char src[SIZE];
    printf("input lines:\n");
    while(s_gets(src, SIZE)) {
        printf("what you input = [%s]\n", src);
        drop_space(src);
        printf("drop sapce = [%s]\n", src);
    }
    print_some();
    return 0;
}

char * drop_space(char * src) {
    int n = strlen(src);
    for(int i = 0; i < n; i++) {
        n = strlen(src);
        if(isspace(src[i])) {
            for(int k = i; k < n -1; k++) {
                src[k] = src[k+1];
            }
            src[n-1] = '\0';
        }
    }
    return src;
}
