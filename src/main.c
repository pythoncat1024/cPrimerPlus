#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 15
void collect_random(int size, int * arr, int min, int max);
void sort(int size,int * arr);
void show(int size, const int * arr);

int main(void) {
    int * arr = (int *)calloc(sizeof(int), SIZE);
    collect_random(SIZE, arr, 1, 10);
    puts("show origin:");
    show(SIZE, arr);
    sort(SIZE, arr);
    puts("show sorted:");
    show(SIZE, arr);
    free(arr);
    return 0;
}

void show(int size, const int * arr) {
    for(int i = 0; i < size; i++) {
        if(i> 0 && i % 10 == 0)
            puts("");
        printf("%d, ", arr[i]);
    }
    puts("");
}
void sort(int size,int * arr) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - 1 - i; j++) {
            if(arr[j] < arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

void collect_random(int size, int * arr, int min, int max) {
    if(max <= min) {
        printf("max must > min!\n");
    }
    printf("time=%ld\n", time(0));
    for(int i = 0; i < size; i++) {
        // srand((unsigned int) time(0));
        long r = rand();
        r %= (max - min);
        r += min;
        arr[i] = r;
    }
}

