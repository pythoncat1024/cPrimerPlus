#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINE '\n'
#define MAX_LENGTH 1000

int main(int argc, char *argv[])
{
    printf("%s\n", "input any long lines,you can:");
    int count = 0;
    char inputs[MAX_LENGTH];
    char reminds[MAX_LENGTH];

    while (gets(inputs) != NULL)
    {
        int size = strlen(inputs);
        if (count < size)
        {
            count = size;
            strncpy(reminds, inputs, size);
        }
    }

    printf("max length of input is: [%s], length = [%d]\n", reminds, count);

    return EXIT_SUCCESS;
}
