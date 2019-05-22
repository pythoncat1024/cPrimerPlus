#include <stdio.h>
#include <stdlib.h>

void show_arr(int row, int col, const int ** arr);
void free_arr(int row, int ** arr);
void show(int row,int col, const int (*arr)[col]) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d,\t", arr[i][j]);
        }
        printf("\n");
    }
}
int main(void) {

    int mk[2][3] = {
        {11, 22, 33},
        {44, 55, 66}
    }; // 并不能被定义成 int ** mk, int (*mk)[3];
    show(2, 3, mk);
    // show_arr(2, 3, mk); // 报错，段错误
    puts("---");
    const int row = 2;
    const int col = 4;
    int ** arr;
    arr = (int **)malloc(sizeof(int *) * row);
    for(int i = 0; i < row; i++) {
        arr[i] = (int *)malloc(sizeof(int) * col);
        for(int j = 0; j < col; j++) {
            arr[i][j] = 10 *(i + 1) + (j + 1);
        }
    }
    show_arr(row, col, (const int **)arr);
    free_arr(row, arr);
    return 0;
}
void free_arr(int row, int ** arr) {
    for(int i = 0; i < row; i++) {
        free(arr[i]);
    }
    free(arr);
}
void show_arr(int row, int col, const int ** arr) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d,\t", arr[i][j]);
        }
        printf("\n");
    }
}
