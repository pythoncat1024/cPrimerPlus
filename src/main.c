#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LENGTH 100

int main(int argc, char *argv[])
{

    printf("input a string as source string and counnt to copy.\n");
    char line[LENGTH];
    char prev[LENGTH];
    int same = 0;
    while (gets(line) != NULL)
    {
        size_t size = strnlen(line, LENGTH);
        if (strncmp(prev, line, size) == 0)
        {
            same++;
            continue;
            // puts(line);
        }
        else
        {
            if (same)
            {
                puts(prev);
            }
            same = 0;
        }
        strncpy(prev, line, size);
        if (size < LENGTH)
        {
            // 这一句不加，显示就不正常。
            prev[size] = '\0';
        }
    }
    if (same)
    {
        puts(prev);
    }

    return EXIT_SUCCESS;
}
