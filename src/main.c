#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1024 * 6

void fail() { exit(EXIT_FAILURE); }

int main(int argc, char *argv[]) {

    if (argc != 3) {
        puts("I need two file path in command args");
        fail();
    }
    FILE *f1, *f2;
    if ((f1 = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "[%s] is not a readable file.\n", argv[1]);
        fail();
    }
    if ((f2 = fopen(argv[2], "r")) == NULL) {
        fprintf(stderr, "[%s] is not a readable file.\n", argv[1]);
        fail();
    }
//    int v1 = setvbuf(f1, NULL, _IOFBF, MAX);
//    int v2 = setvbuf(f2, NULL, _IOFBF, MAX);
//    if (v1 || v2) {
//        fprintf(stderr, "error occoured when create buf for file [%s] or [%s]\n", argv[1], argv[2]);
//        fail();
//    } // setvbuf  也是可有可无的
    static char line[MAX];
    long int loop = 0;
    int e1 = 0;
    int e2 = 0;
    while (1) {
        if (loop % 2 == 0 && e1 == 0) {
            if (fgets(line, MAX, f1)) {
                char * ch = strchr(line,'\n');
                if(ch != NULL && e2 == 0) {
                    *ch = '\0'; //如果第二个文件已经读完了，就还是保持换行
                }
                fputs(line, stdout);
                fseek(f1, 0L, SEEK_CUR); // 可有可无
            } else {
                //  == null ,文件已经读完
                e1 = 1;
            }

        } else if (e2 == 0) {
            if (fgets(line, MAX, f2)) {
                fputs(line, stdout);
                fseek(f2, 0L, SEEK_CUR);
            } else {
                //  == null ,文件已经读完
                e2 = 1;
            }
        }
        if (e1 && e2) {
            break;
        }
        loop++;
    }
    puts("######## DONE ########");

    if (0 == fclose(f1)) {
        printf("---------------- close [%s]\n", argv[1]);
    }
    if (0 == fclose(f2)) {
        printf("---------------- close [%s]\n", argv[2]);
    }
    return 0;
}
