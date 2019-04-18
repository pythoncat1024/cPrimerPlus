#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'
#define NEXT '\n'

int main(void) {
    bool in_word = false; // 开始一个单词
    int n_chars, n_lines, n_words;
    char ch, prev;
    n_chars = n_lines = n_words = 0;
    prev = '\n';
    printf("统计行数，字符数，单词数( | to quit ):\n");

    while( (ch = getchar()) != STOP ) {
        if( isalpha(ch) )
            n_chars++;

        if( !in_word && !isspace(ch) ) {
            in_word = true;
            n_words++;
        }
        else if( in_word && isspace(ch) ) {
            in_word = false;
        }
        if( ch == NEXT ) {
            n_lines++;
        }
        prev = ch;
        //printf("--- total lines = %d , total words = %d , total chars = %d\n",
        //    n_lines, n_words, n_chars);
    }

    if( prev != NEXT ) {
        // last char == '|'
        n_lines++;
        n_words++;
    }

    // printf("prev = %c\n",prev);

    printf("total lines = %d , total words = %d , total chars = %d\n",
            n_lines, n_words, n_chars);
    return 0;

}
