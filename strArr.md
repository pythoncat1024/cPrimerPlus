### 字符串数组

#### 先说数组

##### 二维数组（int)

```c

// main.c
#include <stdio.h>
void show(const int (*arr)[5], int row);

int main(void) {

    int arr[3][5] = {
            {1,  3,  5,  7,  9},
            {2,  4,  6,  8,  10},
            {99, 88, 77, 66, 55}
    };
    show(arr, 3);
    return 0;
}

void show(const int (*arr)[5], int row) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

```
> 输出如下：（正常）

```
1 3 5 7 9 
2 4 6 8 10 
99 88 77 66 55 
```

-----------

##### 二维数组(变长)

```c
#include <stdio.h>

void show(int row, int col, const int (*arr)[col]);

int main(void) {

    int arr[3][5] = {
            {1,   3,  5,  7,  9},
            {2,   4,  6,  8,  10},
            {919, 88, 77, 66, 55}
    };
    show(3, 5, arr);
    return 0;
}

void show(int row, int col, const int (*arr)[col]) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
```
> 输出如下：（正常）

```
1 3 5 7 9 
2 4 6 8 10 
919 88 77 66 55 
```
----------------------

##### 变长数组2

```c
#include <stdio.h>

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

void show(int row, int col, int (*arr)[col]) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
}
```
> 输出如下：
```
show origin:
   1   3   5   7   9
   2   4   6   8  10
  -1  -3  -5  -7  -9
```
----------------------

##### 字符数组(字符串)
```c
#include <stdio.h>

int main(void) {
    char *str = "hello world";

    char arr[] = "duck like java";
    printf("%s\n", str);
    printf("%s\n", arr);
    return 0;
}
```
> 输出如下：
```
hello world
duck like java
```

----------------

##### 字符串数组

```c
// 字符串数组的显示
#include <stdio.h>

#define SIZE 5

int main(void) {

    char *strings[SIZE] = {
            "hello world",
            "duck like java",
            "cat love fish",
            "tony like hair",
            "c primer plus"
    };

    for (int i = 0; i < SIZE; ++i) {
        printf("%s\n", strings[i]);
    }
    return 0;
}

```
> 输出如下：

```
hello world
duck like java
cat love fish
tony like hair
c primer plus
```

-----------------------

##### `char (*str)[5]` 与 `char *strings[5]`

```c
#include <stdio.h>

#define SIZE 5

int main(void) {

    char *strings[SIZE];
    char (*str)[SIZE];
    printf("size of str = %zd, size of strings = %zd\n",
           sizeof(str), sizeof(strings));

    // 注意二者的区别：arr 是一个指针类型，指向的数据类型是 int name[5](int 类型的数组);
    // 注意二者的区别：ptr 是一个数组类型，其中的元素类型是 int * name(int 类型的指针);

    // 同理
    // strings 是一个数组，里面的元素类型是 char *;
    // str 是一个指针，指向的数据类型是 char name[5];
    // 延伸
    // 为什么 定义二维数组(int类型的) 的定义方式是 int (*arr)[size] 而不是 int *arr[size] 呢
    // 从上面的分析可知 int (*arr)[size] 表示的是一个指针，指向的数据类型是 int name[5]
    // 而 数组表示应该是这种: int arr[3][5] . 那么 arr[0], arr[1]... 都代表了一个 int name[5],
    // 那么 对于字符串数组就明了了。首先字符串是一个字符数组，char[] ,也可以表示成 char *
    // 那么 表达方式就是 char * arr[size] 了。
    return 0;
}

```
> 输出如下：

> size of str = **8**, size of strings = **40**

--------------

##### 字符串数组作为实参以及形参要分别怎么定义，作为返回值，又要如何定义？

> 一言以蔽之：`char **sort_by_first(char *arr[], int row);`

具体写法：

```c
#include <stdio.h>
#include <string.h>

#include "../include/utils.h"

#define ROW 5
#define LENGTH 40

int menu();

void inputs(char *arr[], int row);

void prints(char *arr[], int row);

void sort_by_ascii(char *arr[], int row);

void sort_by_length(char *arr[], int row);

char **sort_by_first(char *arr[], int row);

void call(int row, int col, char arr[row][col]) {
    printf("call start=====\n");
    for (int i = 0; i < row; ++i) {
        printf("%s\t", arr[i]);
    }
    printf("\ncall end=======\n");
}

int main(int argc, char *argv[]) {
    char arr[ROW][LENGTH];
    char *ptr[ROW];

    for (int i = 0; i < ROW; ++i) {
        // 必须要这一步，否则排序就比较麻烦
        ptr[i] = arr[i];
    }

    inputs(ptr, ROW);
    call(ROW, LENGTH, arr);
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

```

> **特别注意上面的 `main()` 以及 `sort_by_first()`.**

##### 区分二维数组 与 字符串数组

> 一个元素是一维数组，而一个元素的指针
```c

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

```

完整代码：[字符串数组与二维`int`数组](https://gist.github.com/pythoncat1024/ac8129f6e2e387d953bbe1e39ca5bb50)
