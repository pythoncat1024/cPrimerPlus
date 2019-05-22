#include <stdio.h>

void call();

int main(void) {

    for(int i = 0; i < 3; i++) {
        call();
    }
    return 0;
}

void call() {
    static int count = 1;
    printf("当前函数调用次数：%d\n", count);
    count++;
}
