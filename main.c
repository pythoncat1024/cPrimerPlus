#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("统计输入的字符数:\n");
    char ch;
    int count_lower = 0;
    int count_upper = 0;
    int count_number = 0;
    while( (ch = getchar()) != EOF )
    {
        if(islower(ch)) {
            count_lower++;
        }else if(isupper(ch)) {
            count_upper++;
        }else if(isnumber(ch)) {
            count_number++;
        }
    }
    printf("count of lower = %d,"
            "count of upper = %d,"
            "count of number = %d."
            "\n", count_lower, count_upper, count_number);
    return 0;
}
