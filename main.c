#include <stdio.h>

#define GAL 3.875
#define MI 1.609
int main(void){
    printf("输入旅行的里程数（mi）和消耗的汽油量（us gal）:");
    float distance;
    float total_gal;
    scanf("%f %f", &distance , &total_gal);
    float per = distance / total_gal;
    float distance_km = distance * MI;
    float total_l = GAL * total_gal;
    float per2 = total_l/ (100 * distance_km);

    printf("行驶 %.1f 英里，消耗 %.1f 加仑的汽油，"
           "平均消耗为 %.1f(mi/gal)\n" ,
            distance , total_gal , per);

    printf("相当于行驶了 %.1f 千米，消耗 %.1f 升的汽油，"
            "平均消耗为 %1f (l%%km)\n" ,
            distance_km , total_l , per2);
    return 0;
}
