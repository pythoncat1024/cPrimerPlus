#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 1024 * 10
typedef FILE File;

void append(File * src, File * dst);

// 追加文件到目标文件
int main(int argc, char * argv[]) {

    if(argc < 2) {
        fprintf(stderr, "execute with source path and dst path\n");
    }
    for(int i = 1; i < argc; i++) {
        puts(argv[i]);
    }
    File *dst = fopen(argv[argc - 1],"a+");
    if(dst == NULL) {
        fprintf(stderr,"open %s fail\n", argv[argc - 1]);
        exit(EXIT_FAILURE);
    }
    for(int i = 1; i < argc-1; i++) {
        File * src;
        if((src = fopen(argv[i], "r")) != NULL) {
            fprintf(stdout, "start to append [%s] to [%s]\n", argv[i], argv[argc - 1]);
            append(src, dst);
            if(feof(src) == 0) {
                fprintf(stderr, "error to close [%s]\n", argv[i]);
                exit(EXIT_FAILURE);
            }
            fclose(src);
        }
    }
    fclose(dst);
    puts("Done.");
    return 0;
}

void append(File * src, File * dst) {
    rewind(dst); // 可有可无
    static char buf[BUFFER_SIZE];
    int vb = setvbuf(src, buf, _IOFBF, BUFFER_SIZE); // buf 可为 NULL
    if(vb != 0) {
        fprintf(stderr, "setvbuf for src file fail\n");
        exit(EXIT_FAILURE);
    }
    size_t read;
    while((read = fread(buf, sizeof(char), BUFFER_SIZE, src)) > 0) {
        fwrite(buf, sizeof(char), read, dst);
    }
}
