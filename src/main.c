#include <stdio.h>
#include <stdlib.h>
#define LENGTH 100

int substr(char dst[], char src[], int start, int len);

int slen(char target[])
{
    int s = 0;
    while (target[s++] != '\0')
        ;
    return s - 1;
}

int main(int argc, char *argv[])
{
    char src[LENGTH], dst[LENGTH];
    while (gets(src) != NULL)
    {
        dst[0] = '\0';
        int result = substr(dst, src, 5, 6);
        printf("src==========[%s]\n", src);
        printf("copied::[%u],[%s]\n\n", result, dst);
    }

    return EXIT_SUCCESS;
}

int substr(char dst[], char src[], int start, int len)
{
    size_t srcLen = slen(src);
    size_t dstLen = slen(dst);

    if (start < 0 || len < 0 || start > srcLen)
    {
        return slen(dst);
    }
    if (len > srcLen)
    {
        len = srcLen;
    }
    size_t pos;
    if (dstLen + len > LENGTH)
    {
        pos = 0;
    }
    else
    {
        pos = dstLen;
    }
    // printf("---copy---[%zu],[%zu],[%u]---[%u]\n", pos, dstLen, start, len);
    for (size_t i = 0; i < len; ++i)
    {
        dst[pos + i] = src[start + i];
    }
    if (pos + len < LENGTH)
    {
        dst[pos + len] = '\0';
    }
    return slen(dst);
}
