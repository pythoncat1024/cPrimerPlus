#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 14
#define EXT ".cp" // 后缀名

int main(int argc, char *argv[]) {
    fprintf(stdout, "copy a file:\n");

    char name[LEN];
    int ch;
    long count = 0;
    FILE *fp; // origin file
    FILE *fout; // origin.cp file
    if (argc < 2) {
        printf("I need a file path in args!\n");
        exit(EXIT_FAILURE);
    } else if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("%s is not a file!\n", argv[1]);
    } else {
        int name_OK = 0;
        if (strncpy(name, argv[1], LEN - strlen(EXT))) {
            if (strlen(name) > LEN - strlen(EXT)) {
                name[LEN - (strlen(EXT) + 1)] = '\0';
            }
            size_t size = LEN - strlen(name) + 1;
            if (strncat(name, EXT, size)) {
                name_OK = 1;
            }
        }
        if (!name_OK) {
            fprintf(stderr, "define output file name %s fail.\n", name);
            exit(EXIT_FAILURE);
        }
        if ((fout = fopen(name, "w")) == NULL) {
            fprintf(stderr, "create file %s fail.\n", name);
            exit(EXIT_FAILURE);
        }

        while ((ch = getc(fp)) != EOF) {
            putc(ch, fout);
            // count++;
        }

        if (0 != fclose(fp)) {
            fprintf(stderr, "Error in close %s\n", argv[1]);
        } else if (0 != fclose(fout)) {
            fprintf(stderr, "Error in close %s\n", name);
        } else {
            fprintf(stdout, "src file [%s] \ncopied to \ndst file [%s]\n", argv[1], name);
        }
    }
    return 0;
}
