#include <stdio.h>

int main(void)
{
    int arr1[] = {1, 2, 3};
    char arr2[] = "hello world";
    char * ptr3 = "c primer plus";
    const int * par1 = arr1;
    const char * par2 = arr2;
    par1++;
    par2++;
    printf("arr1 = %p, par1 = %p\n", arr1, par1);
    printf("arr2 = %p, par2 = %p\n", arr2, par2);
    arr1[0] = 24;
    *(arr1 + 1) = 31;
    arr2[0] = 'H';
    ++par2;
    *(arr2 + 5) = 'M';

    printf("arr2 = %s, *par2 = %c\n", arr2, *par2);
    printf("*ptr2 = %c\n", *ptr3);
    // *ptr3 = 'd'; // 'char * ptr3' 实际上是 'const char * ptr3'
    char ch = 'x';
    ptr3 = &ch; // 所以可以看出来，字符串指针实际上是 const char * str 类型
    // 不是 char const * str 类型
    //arr2 = ptr3;// 类型不匹配:
    char const arr5[] ="hello world";
    // arr5 = arr2; // 报错, arr5 是常量了，跟前面的 const 修饰没有关系
    // arr5[1] = 'C'; 报错// 数组表示法中 char const arr[n]; 相当于 const char arr[n]
    // 因为 c 中数组名就是常量，不能被改变了，所以加 const 就相当于 'const char const * arr'

    return 0;
}
