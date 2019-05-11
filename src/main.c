#include <stdio.h>

void input(int row, int col, double (*arr)[col]);

void show(int row, int col, const double (*arr)[col]);

double avg(const double *start, int length);

double max(const double *start, int length);

int main(void) {
    double arr[3][5];
    input(3, 5, arr);
    printf("# arr :\n");
    show(3, 5, arr);
    double average = avg((double *) arr, 3 * 5);
    double m = max((double *) arr, 3 * 5);

    printf("avg = %g, max = %g\n", average, m);
    return 0;
}

double max(const double *start, int n) {
    double max = *start;
    const double *end = start + n;
    while (start < end) {
        if (max < *start) {
            max = *start;
        }
        start++;
    }
    return max;
}

double avg(const double *start, int n) {
    double total = 0;
    const double *end = start + n;
    while (start < end) {
        total += *start;
        start++;
    }
    return total / n;
}

void input(int row, int col, double (*arr)[col]) {
    int ch;
    for (int i = 0; i < row; i++) {
        printf("请输入第%d组数字(每组%d个,回车结束输入)：", i + 1, 5);
        // 这样写死是5个了，处理方便一点
        while (col != scanf("%lf %lf %lf %lf %lf",
                            &arr[i][0], &arr[i][1], &arr[i][2],
                            &arr[i][3], &arr[i][4])) {
            while ((ch = getchar()) != '\n')
                putchar(ch);
            printf(" is not valid input!\nPlease try again: ");
        }
    }
}

void show(int row, int col, const double (*arr)[col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%5.1lf", arr[i][j]);
        }
        printf("\n");
    }
}
