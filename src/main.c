#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char * argv[]) {
    printf("input multi lines:\n");
    char str[1000];
    char ch;
    int pos;
    int menu;
    if( argc == 1 )
        menu = 0;
    else if(strcmp("-p", argv[1]) == 0)
        menu = 0;
    else if(strcmp("-u", argv[1]) == 0)
        menu = 1;
    else if(strcmp("-l", argv[1]) == 0)
        menu = 2;
    else
        menu = 0;
    switch(menu) {
        case 0:
            while((ch = getchar()) != EOF && pos < 1000) {
                str[pos] = ch;
                pos++;
            }
            puts("###################");
            printf("%s\n", str);
            break;
        case 1:
            while((ch = getchar()) != EOF && pos < 1000) {
                str[pos] = toupper(ch);
                pos++;
            }
            puts("###################");
            printf("%s\n", str);
            break;
        case 2:
            while((ch = getchar()) != EOF && pos < 1000) {
                str[pos] = tolower(ch);
                pos++;
            }
            puts("###################");
            printf("%s\n", str);
            break;
    }
    return 0;
}
