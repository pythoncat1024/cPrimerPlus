#include <stdio.h>
#define WEEK 7
int main(void) {
    printf("天数转周数+天数了，请输入天数：");
    int days;
    scanf("%d" , &days);
    while (days > 0) {

        int w = days / WEEK;
        int d = days % WEEK;
        printf("%d days are %d weeks, %d days.\n" , days , w , d);
        printf("天数转周数+天数了，请输入天数：");
        scanf("%d" , &days);
    }
    printf("\n ### 输入不合法。###\n");
    return 0;
}
