#include <stdio.h>
#include <string.h>

int main(void){
    char name[20];
    char ln[20];
    printf("input your first name:");
    scanf("%s" , name);
    printf("input your last name:");
    scanf("%s" , ln);

    int len_name = strlen(name);
    int len_ln = strlen(ln);
    printf("%-20s %-20s\n", name , ln);
    printf("%-20d %-20d\n" , len_name , len_ln);
    return 0;
}
