#include <stdio.h>

void oneline(const double * start, const double * end);
void show(const double (*arr)[3], int row);
void copy(double * target, const double * start, const double * end);

int main(void) {
    double rain[4][3] = {
            23.2, 12.4, 45.2,
            21.7, 34.3, 27,
            24.9, 38,   45.62,
            9,    3,    1
    };
    double cp[4][3];
    printf("show origin oneline :\n");
    oneline( &rain[0][0], &rain[3][2]);
    printf("show origin:\n");
    show(rain, 4);
    copy(&cp[0][0], &rain[0][0], &rain[3][2]);
    printf("show copied:\n");
    show(cp, 4);
    printf("数组指针就是数组首元素的地址:\n");
    copy(cp, rain, rain + 12);
    show(cp, 4);
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

void oneline(const double * start, const double * end)
{
   while(start < end)
   {
        printf("%6.1f", *start++);
   }
   printf("\n");
}
