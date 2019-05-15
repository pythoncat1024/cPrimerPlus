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

