#include <stdio.h>

// 要求输入一个ASCII码值，然后打印输入的字符。
int main(void){
    int input;
    printf("输入一个ASCII码值(应该是0-127之间？)：");
    scanf("%d",&input);
    printf("num = %d , also equal %c ---END\n",input,input);
    return 0;
}
