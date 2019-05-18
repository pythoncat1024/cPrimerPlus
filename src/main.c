#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[]) {
    char gold[40] = "art of it all ";
    char samuel[40] = "I read p";
    const char * quote = "the way throuth.";
    strcat(gold, quote);
    strcat(samuel, gold);
    puts(samuel);
    return 0;
}
