#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int each_arr[20];
    int start, end;
    start = end = 0; // 单词开始结束标记
    char prev = '\n';
    char ch;
    int count = 0; // 总字符数
    int total_word = 0; // 单词总数
    int count_each = 0; // 每个单词的字母数量
    while( (ch = getchar()) != EOF )
    {
        count++;
        if( !isalpha(prev) && isalpha(ch)) {
            start = 1;
            end = 0;
            count_each = 0;
        }
        if(isalpha(prev) && !isalpha(ch)) {
            end = 1;
            start = 0;
            total_word++;
        }

        if(start && !end){
            // putchar(ch);
            count_each++;
        }
        if(end && !start){
            each_arr[total_word-1] = count_each;
            // printf("count of current = %d\n", count_each);
        }
        prev = ch; // 记住上次的字符
    }
    printf("total char = %d, total word = %d\n",
            count, total_word);
    for(int x=0;x<total_word;x++){
        if(each_arr[x] > 0)
            printf("%d ",each_arr[x]);
    }
    return 0;
}
