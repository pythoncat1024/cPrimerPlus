#include <stdio.h>
#include <string.h>

int main(void)
{
    const char * huge = "duck like java";
    const char key = 'k';

    char * ss = strrchr(huge, key);

    printf("r find '%c' in '%s' = '%s'\n", key, huge, ss);
    return 0;
}
