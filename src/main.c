#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/utils.h"

int main(int argc, char * argv[]) {
    if(argc != 3) {
        fprintf(stderr, "need one source path and one path, like abc.dat file.tt\n");
        exit(EXIT_FAILURE);
    }
    copy_file(argv[1], argv[2], 1);
    return 0;
}
