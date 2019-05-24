#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {

    int ch;
    long count = 0;
    FILE * fp;
    if(argc < 2) {
        printf("I need a file path in args!\n");
        exit(EXIT_FAILURE);
    } else if((fp = fopen(argv[1],"r")) == NULL) {
        printf("%s is not a file!\n", argv[1]);
    } else {
        while((ch = getc(fp)) != EOF) {
            // putc(ch, stdout);
            count++;
        }

        if (0 != fclose(fp)) {
            printf("Error in close %s\n", argv[1]);
        }else {
            printf("file %s has %ld count chars.\n", argv[1], count);
        }
    }
    return 0;
}
