#include <stdio.h>
#include <string.h>

int main(void){
    printf("input a float number:");
    float num;
    scanf("%g",&num);
    printf("number == %.1f or %.1e\n", num,num);
    printf("number == %+.3f or %E\n", num,num);
    return 0;
}
