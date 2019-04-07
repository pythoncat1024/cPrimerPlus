#include <stdio.h>
#include <string.h>

int main(void){
    printf("input your height (cm) and name:");
    float height;
    char name[30];
    scanf("%g",&height);
    scanf("%s",name);
    printf("%s,you are %g m tall\n", name,height/100);
    return 0;
}
