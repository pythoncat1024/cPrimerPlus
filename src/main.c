#include <stdio.h>
#include <string.h>
#include "../include/utils.h"

char * mstrncpy(char * s1, char * s2, int n);
void to_empty(char * arr, int n);

int main(int argc, char * argv[]) {
    printf("input what you want, empty line to quit::\n");
    char s1[50], s2[50];
    while(1) {
        to_empty(s1, 50);
        to_empty(s2, 50);
        printf("input first line:\n");
        char * p1 = s_gets(s1, 50);
        if(!p1) break;
        puts("input second line:");
        char * p2 = s_gets(s2, 50);
        if(!p2) break;
        int n = 50 - strlen(p1);
        char * p3 = mstrncpy(s1, s2, n);
        printf("s1=[%s],s2=[%s],p3=[%s]\n", s1, s2, p3);
    }
    puts("Done");
    return 0;
}
void to_empty(char * str, int n) {
    for(int i = 0; i < n; i++) {
        str[i] = '\0';
    }
}
char * mstrncpy(char * s1, char * s2, int n) {

    int pos = 0;
    int start = strlen(s1);
    while(*(s2+ pos) && pos < n) {
        *(s1 + start + pos) = *(s2 + pos);
        pos++;
    }
    return s1;
}
