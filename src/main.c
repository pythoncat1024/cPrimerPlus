#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    printf("how many words do you wish to enter: ");
    int count;
    scanf("%d", &count);
    char * * str;
    str = (char **)malloc(sizeof(char**) * count);
    printf("Enter %d words now:\n", count);
    puts("I enjoyed doing this exerise");
    const int len = 40;
    char tmp[40];
    for(int i = 0; i < count; i++) {
        scanf("%s", tmp);
        str[i] = (char *)malloc((strlen(tmp) +1) * (sizeof(char)));
        strncpy(str[i], tmp, strlen(tmp));
    }
    puts("Here are your words:");
    for(int i = 0; i < count; i++) {
        puts(str[i]);
        free(str[i]);
    }
    free(str);
    return 0;
}
