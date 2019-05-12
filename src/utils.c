//
// Created by cat on 2019/5/8.
//
#include "utils.h"
#include <stdio.h>

char * s_gets(char * str, int n)
{
    char * ptr = fgets(str, n, stdin);
    for(int i = 0; i < n; i++)
    {
        if(*(ptr + i) == '\0')
        {
            break;
        }
        else if(*(ptr + i) == '\n')
        {
            *(ptr + i) = '\0';
            break;
        }
    }
    return ptr;

}
void print_some() {
    printf("this is an useless method,only print this line.\n");
}

// 逻辑就是，将一个数 %2 ，得到第一位，然后将该数 /2 ，再次 %2，得到第二位
// 通过递归刚好做到倒序打印，即先打印最后以为，再以此向前打印
void binary(int n) {
    if (n > 1) {
        binary(n / 2);
    }
    printf("%d", n % 2);
}
