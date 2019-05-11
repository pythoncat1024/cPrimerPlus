#include <stdio.h>

void one_line(const double * start, const double * end);
void show(const double (*arr)[3], int row);
void copy(double * target, const double * start, const double * end);

int main(void) {

    double arr[7] = {1, 2, 3, 4, 5, 6, 7};
    double dest[3];
    printf("show origin arr: ");
    one_line(arr, arr + 7);
    copy(dest, &arr[2], &arr[5]); // end 是不拷贝的
    printf("show copied arr: ");
    one_line(dest, dest + 3);
    return 0;
}

void copy(double * target, const double * start, const double * end)
{
    while(start < end)
    {
        *target++ = *start++;
    }
}

void show(const double arr[][3], int row)
{
    for(int i = 0; i < row; i++)
    {
        for(int k = 0; k < 3; k++)
        {
            printf("%6.1f", arr[i][k]);
        }
        printf("\n");
    }
}

void one_line(const double * start, const double * end)
{
   while(start < end)
   {
        printf("%6.1f", *start++);
   }
   printf("\n");
}
