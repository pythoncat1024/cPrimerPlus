#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/utils.h"

int main(int argc, char * argv[]) {

    if(argc < 3) {
        puts("i need one more args");
    }

    copy_file(argv[1], argv[2]);
    append_file(argv[1], argv[3]);
    return 0;
}
