#include <stdio.h>
#include <string.h>

int main(void)
{
    const char * huge = "duck like java";
    const char * key = "like";

    char * ss = strstr(huge, key);

    printf("find '%s' in '%s' = '%s'\n", key, huge, ss);
    return 0;
}
