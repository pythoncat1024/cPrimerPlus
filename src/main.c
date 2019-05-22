#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 5
void op_strings();
void show(const char *str[], int size);

void op_arr();
void show_arr(int row, int col, const int (*arr)[col]);

void test_show_arr();

int main(void) {
    test_show_arr();
    op_arr();
    op_strings();
    return 0;
}
void test_show_arr() {
    int numbers[2][4] = {
        {20, -40, 60, 80},
        {10, 30, 50, 70}
    };
    show_arr(2, 4, numbers);
    puts("end---- test-----");
}
void show_arr(int row, int col, const int (*arr)[col]) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("[%d,%d]=%d,\t",i,j, arr[i][j]);
            // printf("---------%p\n", &arr[i][j]);
        }
        puts("");
    }
}
void op_arr() {
    const int COL = 3;
    int (*arr)[COL];
    arr = (int (*)[COL])malloc(sizeof(int) * SIZE * COL);
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < COL; j++) {
            arr[i][j] = (i+1) * 10 + (j + 1);
            // printf("===============%p\n", &arr[i][j]);
        }
    }
    show_arr(SIZE, COL, arr);
    free(arr);
}

void op_strings() {
    char ** strings;
    char * ele = "hello world";
    strings = (char **)calloc(sizeof(char *), SIZE);
    for(int i = 0; i < SIZE; i++) {
        strings[i] = (char *)calloc(sizeof(char),strlen(ele) + 1);
        strncpy(strings[i], ele, strlen(ele));
    }
    // 创建一个数组 strings ,并且每个元素的值为 "hello world";
    show((const char **)strings, SIZE);
    for(int i = 0; i < SIZE; i++) {
        free(strings[i]);
    }
    free(strings);
}

void show(const char * str[], int size) {
    for(int i = 0; i < size; i++ ) {
        printf("%s,\t", str[i]);
    }
    printf("\n");
}
