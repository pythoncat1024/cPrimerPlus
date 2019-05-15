#include <stdio.h>
#include <string.h>

#define SIZE 5

void show(int size, const char *str[]);

void copy_ptr(int size, char *dst[], char *src[]);

void sort_str(int size, char *dst[]);

int main(void) {

    char *strings[SIZE] = {
            "100", "300", "500", "200", "400",
    };

    char *dst[SIZE];
    printf("show origin:\n");
    show(SIZE, (const char **) strings);
    printf("show copied:\n");
    copy_ptr(SIZE, dst, strings);
    show(SIZE, (const char **) dst);

    printf("show sorted:\n");
    sort_str(SIZE, dst);
    show(SIZE, (const char **) dst);
    return 0;
}

/**
 * 算法实现有问题
 * @param size size
 * @param arr arr
 */
void sort_str(int size, char *arr[]) {
    int cmp;
    char *s;
    int temp; // 定义一个临时变量
    for (int i = 0; i < size - 1; i++) {//冒泡趟数
        for (int j = 0; j < size - i - 1; j++) {
            cmp = strcmp(arr[j + 1], arr[j]);
            if (cmp) {
                s = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = s;
            }
            if (j == 1)break;
        }
    }
}

void copy_ptr(int size, char *dst[], char *src[]) {
    for (int i = 0; i < size; ++i) {
        dst[i] = src[i];
    }
}

void show(int size, const char *str[]) {
    for (int i = 0; i < size; ++i) {
        printf("%s\n", *(str + i));
    }
}

