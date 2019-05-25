#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[]) {
    if(argc != 3) {
        fprintf(stderr, "need one key and one path, like grep -n key file.txt\n");
        exit(EXIT_FAILURE);
    }
    const char * key = argv[1];
    const char * fname = argv[2];
    FILE * fp;
    if((fp = fopen(fname, "r")) == NULL) {
        fprintf(stderr, "[%s] is not a file\n", fname);
        exit(EXIT_FAILURE);
    }
    const int max_line = 1024 * 10;
    char line[max_line];
    int row = 0;
    while(fgets(line, max_line, fp)) {
        row++;
        if(strstr(line, key)) {
            printf("%d:", row);
            fputs(line, stdout);
        }
    }

    return 0;
}
