#include <stdio.h>
#include <string.h>

void s_gets(char * str, int n);

int main(int argc, char * argv[]) {

    printf("input some words:\n");
    int n = 50;
    char arr[21];
    s_gets(arr, n);
    printf("arr = %s\n", arr);
    return 0;
}

void s_gets(char * str, int n) {
    fgets(str, n, stdin);
    if( strlen(str) > n )
        *(str + n) = '\0';
}
