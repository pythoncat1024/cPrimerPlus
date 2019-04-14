#include <stdio.h>
#define SIZE 50

int main(void)
{
    printf("输入一个单词: ");
    char word[SIZE];
    int pos = 0;
    while( scanf("%c" , &word[pos])
            && pos < SIZE
            && word[pos] != ' '
            && word[pos] != '\n')
    {
        pos++ ;
    }
    if( pos < SIZE )
    {
        word[pos] = '\0';
    }
    for(int i=0 ; i < pos ; i++)
    {
        printf("%c" , word[i]);
    }
    printf("\n");
    for(int i=pos -1 ; i >= 0 ; i--){
        printf("%c" , word[i]);
    }
    printf("\n");

    // printf("\n word ===#%s#\n" , word);
}
