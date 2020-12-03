#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COLUMNS 20
#define MAX_INPUT 100

int read_columns(int col[], int max);
void rearrange(char input[], char output[], int col_len, int col[]);

int main(int argc, char *argv[])
{
    int n_columns;
    int columns[MAX_COLUMNS];
    char inputs[MAX_INPUT];
    char outputs[MAX_INPUT];
    n_columns = read_columns(columns, MAX_COLUMNS);

    while (gets(inputs) != NULL)
    {
        printf("origin input: %s\n", inputs);
        rearrange(inputs, outputs, n_columns, columns);
        printf("rearranged line: %s\n", outputs);
    }

    return 0;
}

void rearrange(char input[], char output[], int col_len, int col[])
{
    int pou = 0;
    unsigned long sin = strlen(input);
    // output[0] = '\n';
    int even = (col_len % 2 == 0);

    for (int pos = 0; pos < col_len; pos += 2)
    {
        int begin = col[pos];
        unsigned long len;
        if (pos + 1 < col_len)
        {
            len = col[pos + 1];
        }
        else
        {
            len = sin - begin;
        }

        if (sin < begin || pou >= MAX_INPUT - 1)
        {
            // 如果 input 的长度小于开始拷贝的值
            // 或者 output 没有空间了
            break;
        }
        // 如果 要复制的长度超出 input的实际长度，就截取到尾部即可
        if (begin + len > sin)
        {
            len = sin - begin;
        }

        strncpy(output + pou, input + begin, len);
        pou += len;
    }
    output[pou] = '\0';
}

int read_columns(int col[], int max)
{
    int ch;
    int pos = 0;
    while (scanf("%d", &col[pos]) == 1 && col[pos] >= 0)
    {
        pos++;
    }

    while ((ch = getchar()) != EOF && ch != '\n')
        ;
    return pos;
}
