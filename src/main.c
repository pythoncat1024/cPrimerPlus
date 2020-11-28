#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char arr[100];
    printf("%s","input any thing...:\n");
    
    while (gets(arr) != NULL)
    {
        printf("%c", '+');
        puts(arr);
        printf("%s","input any thing...:\n");
    }

    return 0;
}
