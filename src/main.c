#include <stdio.h>
#include <stdlib.h>

struct month {
    char name[18];
    char nick[3];
    int days;
    int index;
};
typedef struct month m;
int sum(int month_index, const m * arr);

int main(void) {
    m month_arr[12] = {
        {"January", "Jan", 31, 1},
        {"February", "Feb", 28, 2},
        {"March", "Mar", 31, 3},
        {"April", "Apr", 30, 4},
        {"May", "May", 31, 5},
        {"June", "Jun", 30, 6},
        {"July", "Jul", 31, 7},
        {"August", "Aug", 31, 8},
        {"September", "Sep", 30, 9},
        {"October", "Oct", 31, 10},
        {"November", "Nov", 30, 11},
        {"December", "Dec", 31, 12}
    };
    printf("please input a number [1,12]: ");
    int num;
    scanf("%d", &num);
    if(num < 1 || num > 12) {
        printf("Error input!\n");
        exit(EXIT_FAILURE);
    }
    int total = sum(num, month_arr);
    printf("total days sum from 1 to %d = %d\n", num, total);
    return 0;
}

int sum(int month_index, const m * arr) {
    int total = 0;
    for(int i = 0; i <= month_index - 1; i++) {
        total += arr[i].days;
    }
    return total;
}
