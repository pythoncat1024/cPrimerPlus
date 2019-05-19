#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "../include/utils.h"
#define MAX 300
int main(void) {
    char line[MAX];
    printf("input anything:\n");
    s_gets(line, MAX);
    size_t len = strlen(line);
    int up = 0;
    int low = 0;
    int word = 0;
    int num = 0;
    char prev = '\n';
    for(int i = 0; i < len; i++) {
        if(isnumber(line[i])) {
            num++;
        }
        if(isupper(line[i])) {
            up++;
        }
        if(islower(line[i])) {
            low++;
        }
        if(!isalpha(prev) && isalpha(line[i])) {
            word++;
        }
        prev = line[i];
    }

    printf("word=%d,up=%d,low=%d,number=%d\n",
            word, up, low, num);
    return 0;
}
