#include <stdio.h>
#include <string.h>

int main(void){
    char ln[30];
    char fn[30];
    printf("input your lastname and firstname (ln fn):");
    scanf("%s",ln);
    scanf("%s",fn);
    printf("\"%s%20s\"\n", ln,fn);
    return 0;
}
