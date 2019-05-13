#include <stdio.h>
#include <string.h>

int main(void)
{
    const char * huge = "duck like java";
    size_t len = strlen(huge);
    printf("len of %s = %zd\n", huge, len);
    return 0;
}
