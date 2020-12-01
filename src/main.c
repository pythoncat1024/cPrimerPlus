#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COLUMNS 20
#define MAX_INPUT 100

int main(int argc, char *argv[])
{
    int x = 0;
    while (x < 10)
    {
        x++;
        printf("%d\n", (x - 100));
    }
    printf("%s\n", "main finished...");
    return 0;
}
