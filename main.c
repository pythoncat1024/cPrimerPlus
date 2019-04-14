#include <stdio.h>
#define A 'A'
#define CHAR 'F'

int main(void)
{
    printf("请输入金字塔字符（A-Z）：");
    char target;
    target = CHAR;
    scanf("%c" , &target);
    const int row = target - A + 1 ;
    const int max_column_size = (target - A) * 2 + 1;
    for( int i = 0; i < row ; i++ )
    {
        int abc = 2*i + 1; // 每行字母的数量
        int each_space = (max_column_size - abc) / 2; // 每行前后的空格数量
        int pos;
        char ch; // 待打印的字符
        for( pos = 0; pos < each_space ; pos++ )
        {
            printf(" ");
        }

        for ( pos = 0 , ch = A ; pos < abc/2 ; pos++ , ch++ )
        {
            printf("%c" , ch);
        }
        printf("%c" , ch);
        for ( pos = 0 , ch = ch -1 ; pos < abc/2 ; pos++ , ch-- )
        {
            printf("%c" , ch);
        }
        for ( pos = 0 ; pos < each_space ; pos++ )
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
