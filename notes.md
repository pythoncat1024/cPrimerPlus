### 骚操作合集

* 对应两个整数 a,b 进行取模操作 `a%b == a - (a/b)*b ;` 等式恒成立；


### warning

* `scanf()` 会丢弃空格，制表符，换行符等任何形式的空格
(但是只是将其留在缓存队列中，并没有真的去丢弃)。

* `getchar()` 不会丢弃任何字符。

* 指针是一种数据类型。
如 int 类型变量的值是整数，char 类型的变量的值是字符，指针类型的变量的值是地址

* `const` 在 c 与 Java 中的区别：
    1. 在 Java 中，`final` 只让当前数组不能二次赋值，不会影响其中的元素二次赋值。
    ```java
        final int[] arr = new int[5];
        arr[0] = 12;
        arr[1] = 13;
        arr[2] = 14;
        arr[2] = 17;
        System.out.println(Arrays.toString(arr));
    ```
    比如以上代码，在 Java 中是完全合法有效的。但是如果是在 c 中，就会编译报错。
    2. 如果是 c 中：
    ```c
    const int arr[5] = {};
    arr[0] = 13; // 这里就会编译报错
    ```
所以，通过 1，2可以明显看出，同样是“常量”，对应的处理细节是有差别的。

> 备注：上述 2 中的 const int arr[5], 实际上是一个 指向 const 的指针。

*  对于'指向`const`的指针'说明：

```c
    int rain[14] = {1, 2};
    const int * ptr = rain;

    // ptr++; // ok
    ptr += 1; // ok
    // 说明 const 指针可以被改变。
    *ptr = 66; // 编译失败！！！
    // 说明 const 指针不能用来改变值。(但是自己可以被改变)
    int zoo[23] = {};
    ptr = zoo; // ok 再次说明，const 指针可以改变指向，只是不能操作值！
```
    1. 对于指向`const`的指针，可以将 普通指针以及指向`const`指针赋值给它
    2. 对于指向`const`的指针，不能赋值给普通指针。（如果可以，会导致 指向`const`的指针对应的数据可以被修改）

* 对于'`const`指针'的说明：

```c
    int rain[14] = {12,90,35};
    int zoo[56] = {};
    int * const p = rain;
    *(p + 3) = 34; // ok
    p = &zoo[0]; // 编译失败，const指针不能被二次赋值
```
