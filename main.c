#include <stdio.h>

// 1品脱=2杯，1杯=8盎司，1盎司=2大汤勺，1大汤勺=3茶勺
// 根据输入的杯数，输出对应的品脱，盎司，大汤勺，茶勺的对应数值。
int main(void){
    printf("你有几杯水，现在：");
    int bei;
    scanf("%d",&bei);
    float pintuo = bei/2.0F;
    int angsi = 8*bei;
    int tangshao = bei * 8 * 2;
    int chashao = bei * 8 *2 * 3;
    printf("%d 杯 = %.01f 品脱 = %d 盎司 = %d 大汤勺 = %d 茶勺\n",
            bei , pintuo , angsi , tangshao , chashao);
    return 0;
}
