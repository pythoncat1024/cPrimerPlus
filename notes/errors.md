#### 错误示例

###### 错误1：定义打印二维数组函数，参数不正确
```c

void show(int row, int col, int (*arr)[col]);

int main(void) {
    int arr[3][5] = {
            {1,  3,  5,  7,  9},
            {2,  4,  6,  8,  10},
            {-1, -3, -5, -7, -9}
    };
    printf("show origin:\n");
    show(3, 5, arr);
    return 0;
}

void show(int row, int col, int (*arr)[row]) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
}
```
> 似乎看不出问题在哪，但是输出的效果不对。

出错就错在 show() 函数的第三个参数上面，上面定义的是`int (*arr)[row]`，

而实际上应该是`arr[row][col]` 即 `int (*arr)[col]`.