#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int quantity, price;
    char array[20];
    scanf("%d %d %s", &quantity, &price, array);

    printf("output:%d-%d-%s\n", quantity, price, array);
    return 0;
}
