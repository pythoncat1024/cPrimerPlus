#include <stdio.h>
#include <string.h>
#include "../include/utils.h"

const char * fstrchr(const char * str, const char key);
int main(int argc, char * argv[]) {
    printf("input what you want. empty line to quit:\n");
    char arr[56];
    char key;
    const char * find;
    while(s_gets(arr, 56) && 1 == scanf("%c", &key)) {
        while(getchar() !='\n')
            continue;
        find = fstrchr(arr, key);
        printf("arr=[%s],key=[%c],find=[%s]\n", arr, key, find);
    }
    puts("Done.");
    return 0;
}

const char * fstrchr(const char * str, const char key) {
    while(*str) {
        if(*str == key)
            return str;
        str++;
    }
    return (const char *)NULL;

}

