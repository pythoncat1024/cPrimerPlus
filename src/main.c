#include <stdio.h>

void show(const double ar[], int n);
void show2(const double ar[2][3], int n);
int main(void)
{

    printf("printf show\n");
    show((double []){8,3,9,2}, 4);
    printf("printf show2\n");
    show2((double [2][3]){{8, 3, 9}, {5, 4, 1}}, 2);
    return 0;
}

void show2(const double ar[][3], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%-3g", * (*(ar + i) + j));
        }
        printf("\n");
    }
}

void show(const double ar[],int n)
{
    for(int i = 0; i < n ; i++)
    {
        printf("%-3g", ar[i]);
    }
    printf("\n");
}
