#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define FIRST 1
#define SECOND 2

char get_operation();
float get_number(int seq);
char get_operation();
float get_nonzero();

int main(void)
{
    char op;
    float a,b;
    int quit = 0;
    while( (op = get_operation()) != 'q' ) {
        switch(op) {
            case 'a':
                a = get_number(FIRST);
                b = get_number(SECOND);
                printf("%g + %g = %g\n", a, b, a+b);
                break;
            case 's':
                a = get_number(FIRST);
                b = get_number(SECOND);
                printf("%g - %g = %g\n", a, b, a-b);
                break;
            case 'm':
                a = get_number(FIRST);
                b = get_number(SECOND);
                printf("%g * %g = %g\n", a, b, a*b);
                break;
            case 'd':
                a = get_number(FIRST);
                b = get_number(SECOND);
                if( 0 == b ){
                    b = get_nonzero();
                }
                printf("%g / %g = %g\n", a, b, a/b);
                break;
            case 'q':
                quit = 1;
                break;
            default:
                printf("%c is a undefined operation!\n"
                        "Error!!!! Please check the code!!!!\n ", op);
                quit = 1;
                break;
        }
        if(quit)
            break;
    }
    printf("Bye.\n");
    return 0;
}

float get_nonzero()
{
    printf("Enter a number other than 0:");
    float num;
    int ch;
    while( 1 != scanf("%f", &num) || num == 0 ) {
        while( (ch = getchar()) !='\n')
            putchar(ch);
        printf(" is illegal input of an non zero number.\n"
                "Please try again:");
    }
    return num;
}

float get_number(int seq)
{
    float a;
    char ch;
    if( seq == FIRST ) {
        printf("Enter first number:");
    } else if( seq == SECOND ) {
        printf("Enter second number:");
    }else {
        printf("Unknown error occured in this program!");
        return 33;
        exit(33);
    }
    while( 1 != scanf("%f", &a) ) {
        while( (ch = getchar()) != '\n' )
            putchar(ch);
        printf(" is not an number.\n"
                "Please enter a number, such as 2.5,-1.78e6,or 3.1\n");
    }
    return a;
}

char get_operation()
{
    printf("Enter the operation of your choice:\n");
    printf("a. add           s. subtract\n");
    printf("m. multiply      d. divide\n");
    printf("q. quit\n");
    char ch;
    int ok = 0;
    while( (ch = getchar()) != EOF ) {
        if( isspace(ch) )
            continue;
        switch(ch) {
            case 'a':
            case 's':
            case 'm':
            case 'd':
            case 'q':
                ok = 1;
                break;
            default:
                printf("[");
                putchar(ch);
                while( (ch = getchar()) != '\n')
                    putchar(ch);
                printf("]");
                printf(" is not a volid operation.\n"
                        "Please try again!\n");
        }
        if(ok)
            break;
    }
    while( getchar() != '\n' )
        continue;
    return ch;

}
