#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[]) {
    enum choies {no = 0, yes, maybe};
    enum choies chi = maybe;
    printf("enum chi  = %d\n", chi);
    return 0;
}
