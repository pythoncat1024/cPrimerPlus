#include <stdio.h>
#define HOUR 60

int main(void) {
    int mins;
    do {
        printf("输入分钟数( <=0 quit ): ");
        scanf("%d" , &mins);
        if (mins <=0 ) {
            break;
        }
        int hour = mins / HOUR;
        int min = mins % HOUR;
        if (hour == 0) {
            printf("spent: %d mins.\n" , min);
        } else {
            printf("spent: %d hours and %d mins.\n" , hour , min);
        }
    } while (mins > 0);

    printf("end.\n");
    return 0;
}
