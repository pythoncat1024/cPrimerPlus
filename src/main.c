#include <stdio.h>
#include <stdlib.h>

#define LEN 1024 * 10

void fail() { exit(EXIT_FAILURE); }

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "I need a file path!\n");
        fail();
    } else {
        char *path = argv[1];
        FILE *fp = fopen(path, "r");
        if (NULL == fp) {
            fprintf(stderr, "%s is not a file path!\n", path);
            fail();
        } else {
            if (0 != setvbuf(fp, NULL, _IOFBF, LEN)) {
                fprintf(stderr, "error to set buf for file %s\n", path);
                fail();
            }
            size_t read;
            static char buff[LEN];
            while ((read = fread(buff, sizeof(char), LEN, fp)) > 0) {
                fwrite(buff, sizeof(char), read, stdout);
            }
            fclose(fp);
        }
    }
    return 0;
}
