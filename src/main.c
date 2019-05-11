#include <stdio.h>

void copy_arr(double * target, const double * source, int size);
void copy_ptr(double * target, const double * source, int size);
void copy_ptrs(double * target, const double * start, const double * end);
void show_arr(const double * start, const double * end);

int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];

    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);
    printf("show     src: ");
    show_arr(source, source + 5);
    printf("show target1: ");
    show_arr(target1, target1 + 5);
    printf("show target2: ");
    show_arr(target2, target2 + 5);
    printf("show target3: ");
    show_arr(target3, target3 + 5);
    return 0;
}

void copy_ptrs(double * target, const double * start,const double * end)
{
    while(start < end)
    {
        *target = *start;
        target++;
        start++;
    }
}

void copy_ptr(double * target, const double * source, int size)
{
    for(int i = 0; i < size; i++)
    {
        *(target + i) = *(source +i);
    }
}

void copy_arr(double * target, const double * source, int size)
{
    for(int i = 0; i < size; i++)
    {
        target[i] = source[i];
    }
}

void show_arr(const double * start, const double *end)
{
    while(start < end)
    {
        printf("%-8g", *start);
        start++;
    }
    printf("\n");
}
