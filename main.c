#include <stdio.h>

int main(void)
{
    int lower , upper;
    printf("Enter lower and upper integer limits: ");
    while ( 2 == scanf("%d %d" , &lower , &upper)
            && lower < upper)
    {
        long int x = lower * lower;
        long int y = upper * upper;
        long int z = 0;
        long int fin;
        for(int i = lower+1 ; i< upper ; i++ )
        {
            z += i * i;
        }
        fin = x + y + z;
        printf("The sum of the squares from %ld to %ld is %ld\n" ,
                x , y , fin);
        printf("Enter lower and upper integer limits: ");
    }
    printf("Done\n");
    return 0;
}
