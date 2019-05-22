#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void show(int row, const char ** strings);
void free_arr(int row, char ** str);

int main(void) {
    char * tp[] = {
        "how", "old","are", "you", "I'm", "fine"
    }; // 注意，这里并不能定义成 char ** tp;
    show(3, (const char **)tp);
    const int size = 3;
    char ** strings;
    strings = (char **)malloc(sizeof(char *) * size);
    for(int i = 0; i < size; i++) {
        strings[i] = (char *)malloc(sizeof(char) * (strlen(tp[i]) +1));
        strncpy(strings[i], tp[i], strlen(tp[i]) + 1);
        *(strings[i] + strlen(tp[i])) = '\0';
    }
    show(size, (const char **)strings);
    free_arr(size, strings);
    return 0;
}
void free_arr(int row, char ** str) {
     for(int i = 0; i < row; i++) {
        free(str[i]);
     }
     free(str);
}

void show(int row, const char ** strings) {
    for(int i = 0; i < row; i++) {
        printf("[%s] ", strings[i]);
    }
    printf("\n");
}
