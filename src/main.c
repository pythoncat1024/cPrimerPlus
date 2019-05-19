#include <stdio.h>
#include <string.h>

#include "../include/utils.h"

#define ROW 5
#define LENGTH 20

int menu();

void inputs(char *arr[], int row);

void prints(char *arr[], int row);

void sort_by_ascii(char *arr[], int row);

void sort_by_length(char *arr[], int row);

char **sort_by_first(char *arr[], int row);

void call(int row, int col, char arr[row][col]) {
    for (int i = 0; i < row - 1; i++) {
        for (int j = 0; j < row - 1 - i; j++) {
            if (strlen(arr[j]) < strlen(arr[j + 1])) {
                char tmp[LENGTH];
                strncpy(tmp, arr[j], strlen(arr[j]));
                strncpy(arr[j], arr[j + 1], strlen(arr[j + 1]));
                strncpy(arr[j + 1], tmp, strlen(tmp));
                // strncpy 不会给字符数组后面加 '\0'
            }
        }
    }
}

int main(int argc, char *argv[]) {
    char arr[ROW][LENGTH];
    char *ptr[ROW];

    for (int i = 0; i < ROW; ++i) {
        // 必须要这一步，否则排序就比较麻烦
        ptr[i] = arr[i];
    }

    inputs(ptr, ROW);
    // call(ROW, LENGTH, arr);
    while (1) {
        int select = menu();
        char **s;
        switch (select) {
            case 1:
                prints(ptr, ROW);
                break;
            case 2:
                sort_by_ascii(ptr, ROW);
                prints(ptr, ROW);
                break;
            case 3:
                sort_by_length(ptr, ROW);
                prints(ptr, ROW);
                break;
            case 4:
                s = sort_by_first(ptr, ROW);
                printf("return============================%s\n", s[0]);
                prints(ptr, ROW);
                break;
            default:
                printf("%d is a invalid selection!\n", select);
                break;
        }
        if (select > 4 || select < 1)
            break;
    }
    return 0;
}

void sort_by_ascii(char *arr[], int row) {
    for (int i = 0; i < row - 1; i++) {
        for (int j = 0; j < row - 1 - i; j++) {
            if (strcmp(arr[j], arr[j + 1])) {
                char *tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

void sort_by_length(char *arr[], int row) {
    for (int i = 0; i < row - 1; i++) {
        for (int j = 0; j < row - 1 - i; j++) {
            if (strlen(arr[j]) < strlen(arr[j + 1])) {
                char *tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

char **sort_by_first(char *arr[], int row) {
    for (int i = 0; i < row - 1; i++) {
        for (int j = 0; j < row - 1 - i; j++) {
            if (*arr[j] > *arr[j + 1]) {
                char *tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    return arr;
}


void prints(char *arr[], int row) {
    for (int i = 0; i < row; i++) {
        puts(arr[i]);
    }
}

void inputs(char *arr[], int row) {
    printf("please input %d lines:\n", row);
    for (int i = 0; i < row; ++i) {
        s_gets(arr[i], LENGTH);
    }
}

int menu() {
    puts("############# SELECT MENU ##################");
    puts("1. print by origin    2. print by ascii");
    puts("3. print by len       4. print by first");
    int selected;
    int ch;
    while ((1 != scanf("%d", &selected))) {
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not valid menu. please input number[1,4] again:\n");
    }
    return selected;
}

