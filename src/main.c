#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/utils.h"

// 随机访问
int main(int argc, char * argv[]) {
   const int size = 108;
   // create a double array ,which size equal size
    const char * bf_name = "number.dat"; // binary file

    double array[size];
    // init array first
    for(int i = 0; i < size; i++) {
        array[i] = 100 * i + 1.0 * i / 100;
    }
    // write the array data to binary file
    FILE * dst;
    if((dst = fopen(bf_name, "wb")) == NULL) {
        fprintf(stderr, "can not create file [%s]\n", bf_name);
        exit(EXIT_FAILURE);
    }
    // write data to file
    if( size != fwrite(array, sizeof(double), size, dst)) {
        fprintf(stderr,"### error appeared when write array to file [%s] done.\n", bf_name);
        exit(EXIT_FAILURE);
    }
    fclose(dst);
    if((dst = fopen(bf_name, "rb")) == NULL) {
        fprintf(stderr, "error appeared when open file [%s]\n", bf_name);
        exit(EXIT_FAILURE);
    }

    printf("which pos data you want to see [0, %d-1]:\n", size);
    int pos;
    int ch;
    while(1 != scanf("%d", &pos) || pos < 0 || pos > size) {
        while((ch = getchar()) != '\n')
            putchar(ch);
        puts(" is not a valid position. please try again");
    }
    while(getchar() != '\n')
        continue;
    double ele;
    if(0 == fseek(dst, sizeof(double) * pos, SEEK_SET)) {
        if( 1 == fread(&ele, sizeof(double), 1, dst)) {
            printf("sscceed in access array[%d]! value =  %g\n", pos, ele);
        } else {
            fprintf(stderr, "error appeared when access array[%d]\n", pos);
            exit(EXIT_FAILURE);
        }
    } else {
        fprintf(stderr, "error occoured when seek pointer to %d in file [%s]\n",
                pos, bf_name);
    }

    return 0;
}
