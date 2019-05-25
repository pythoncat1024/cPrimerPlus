#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LINE_MAX 1024 * 5
void fail() { exit(EXIT_FAILURE); }

int main(int argc, char * argv[]) {
    if(argc < 2) {
        fprintf(stderr, "i need command args about showing file paths\n");
        fail();
    }
    FILE * fp;
    for(int i = 1; i < argc; i++) {
        if((fp = fopen(argv[i], "r")) == NULL) {
            fprintf(stderr, "[%s] is not a file\n", argv[i]);
            fail();
        } else {
            // file open success
            fprintf(stdout, "##### index of %d/%d file, named [%s], and content:\n",
                    i, argc-1, argv[i]);
            static char line[LINE_MAX];
            long size = LINE_MAX;
            while(fgets(line, size, fp)) {
                fputs(line, stdout);
                if(ferror(fp)) {
                    fprintf(stderr, "error appeared when read file [%s]\n", argv[i]);
                    fail();
                }
            }
            if(feof(fp)) {
                fclose(fp);
            } else {
                fprintf(stderr, "error appeared after read file [%s]\n", argv[i]);
                fail();
            }
        }
    }
    puts("DONE!");
    return 0;
}
