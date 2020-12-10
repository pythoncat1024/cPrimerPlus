#include <stdio.h>
#include <stdlib.h>
#define LENGTH 100

void copy_n(char dst[], char src[], int n);

int main(int argc, char *argv[])
{

    printf("input a string as source string and counnt to copy.\n");
    char src[LENGTH];
    char dst[LENGTH];
    int n;
    scanf("%s %d", src, &n);
    printf("what's your input:[%s]-[%d]\n", src, n);
    copy_n(dst, src, n);
    printf("copied string:[%s]\n", dst);
    return EXIT_SUCCESS;
}

void copy_n(char dst[], char src[], int n)
{
    int ss = 0, rest = 0, i = 0;
    while (src[i++] != '\0')
    {
        ss++;
    }
    if (n > LENGTH)
    {
        n = LENGTH;
    }
    if (n > ss)
    {
        rest = n - ss;
        n = ss;
    }
    for (size_t i = 0; i < n; i++)
    {
        dst[i] = src[i];
    }
    if (rest > 0)
    {
        for (size_t i = n; i < rest; i++)
        {
            dst[i] = '\0';
        }
    }
}
