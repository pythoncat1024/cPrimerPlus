//
// Created by cat on 2019/5/8.
//
#include "utils.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024 * 8
int __operate_file(const char * src_path, const char * dst_path, const char * mode) {
    FILE * src, * dst;
    if((src = fopen(src_path, "r")) == NULL) {
        fprintf(stderr, "src file [%s] not exists\n", src_path);
        return EXIT_FAILURE;
    }
    // rewind(src);
    int vb = setvbuf(src, NULL, _IOFBF, BUFFER_SIZE);
    if(vb) {
        fprintf(stderr, "error to setvbuf for file [%s]\n", src_path);
        fclose(src);
        return EXIT_FAILURE;
    }
    dst = fopen(dst_path, mode);
    static char buf[BUFFER_SIZE];
    int read;
    while((read = fread(buf, sizeof(char), BUFFER_SIZE, src)) > 0) {
        fwrite(buf, sizeof(char), read, dst);
        if(ferror(src) || ferror(dst)) {
            // != 0, if error appeared
            fprintf(stderr,"error appeared when copy [%s] to [%s]\n",
                    src_path, dst_path);
        }
    }
    if(feof(src) == 0) {
        // != 0, if arrive file end
        fprintf(stderr, "error occoured after copy in file [%s]\n", src_path);
        // TODO: need delete dst file here
        return EXIT_FAILURE;
    }
    fclose(src);
    fclose(dst);
    return EXIT_SUCCESS;

}

int copy_file(const char * src_path, const char * dst_path) {
    return __operate_file(src_path, dst_path, "w");
}

int append_file(const char * src_path, const char * dst_path) {
    return __operate_file(src_path, dst_path, "a+");
}

char * strrevert(char * str) {
    int n = strlen(str);
    char arr[n];
    for(int i = 0; i < n; i++) {
        arr[i] = *(str + i);
    }
    for(int i = 0; i < n; i++) {
        *(str + i) = arr[n -1 - i];
    }
    return str;
}

char * s_gets(char * str, int n)
{
    char * ptr = fgets(str, n, stdin);
    // 如果是空行，返回值统一处理
    if( '\n' == *ptr )
        ptr = NULL;
    else
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
