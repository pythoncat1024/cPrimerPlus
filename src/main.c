#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{

    printf("check trigle! Please input three numbers:\n");
    int a, b, c;
    int ch;
    while (scanf("%d %d %d", &a, &b, &c) == 3)
    {
        printf("what's your inputs: %d,%d,%d\n", a, b, c);
        if (a <= 0 || b <= 0 || c <= 0)
        {
            printf("不是三角形\n");
        }
        else if (a == b && b == c)
        {
            printf("等边三角形\n");
        }
        else if (a == b || b == c || c == a)
        {
            printf("等腰三角形\n");
        }
        else if (a + b > c && a + c > b && b + c > a)
        {
            printf("普通三角形\n");
        }
        else
        {
            printf("不是三角形\n");
        }
        while (getchar() != '\n')
            ;
    }

    return 0;
}
