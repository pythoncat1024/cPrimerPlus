#include <stdio.h>
#include <string.h>

int main(void){
    printf("请输入当前网速(Mb/s)以及要下载的文件大小(MB):");
    float speed, size;
    scanf("%f %f", &speed, &size);
    float sec = size / speed;
    printf("At %.2f megabites per second, a file of %.2f megabytes"
            " downloads in %.2f seconds.\n" ,
            speed , size , sec);
    return 0;
}
