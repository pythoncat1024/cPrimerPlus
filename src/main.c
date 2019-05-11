#include <stdio.h>

void show_vla(int row,int col, const double (*arr)[row]);
void copy_vla(int row,int col, double (*dest)[col], const double (*src)[col]);

int main(void)
{
    double arr[3][5] = {
        {1.1, 2.1, 3.1, 4.1, 5.1},
        {1.2, 2.2, 3.2, 4.2, 5.2},
        {1.3, 2.3, 3.3, 4.3, 5.3}
    };
    double target[3][5];
    printf("show origin arr:\n");
    show_vla(3, 5, arr);
    printf("show copied arr:\n");
    copy_vla(3, 5, target, arr);
    show_vla(3, 5, target);
    return 0;
}

void copy_vla(int row, int col, double (*dest)[col], const double (*src)[col])
{
    const double * start  = &src[0][0];
    const double * end = start + row * col;
    double * ptr = &dest[0][0];
    while(start < end)
    {
        *ptr++ = *start++;
    }
}

void show_vla(int row, int col, const double (*arr)[col])
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%5.1f", arr[i][j]);
        }
        printf("\n");
    }
}
