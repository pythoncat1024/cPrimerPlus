#include <stdio.h>
#include <string.h>

typedef struct lens {
    float foclen;
    float fstop;
    char brand[30];
} LENS;

void inflate(LENS * arr, int size);
void show(LENS *arr, int size);
void print(LENS s);

int main(void) {
    LENS arr[10] = {
        {.brand = "DUCK"}, {.foclen = 33, .brand ="Potato" }
    };
    // inflate(arr, 10);
    show(arr, 10);
    return 0;
}
void inflate(LENS * arr, int size) {
    for(int i = 0; i < size; i++) {
        arr[i].foclen = 500;
        arr[i].fstop = (float)1/2.0f;
        strncpy(arr[i].brand, "Remarkata", 30);
    }
}

void show(LENS * arr, int size) {
    for(int i = 0; i < size; i++) {
        print(arr[i]);
    }
}

void print(LENS s) {
    printf("len=%g,\top=%g,\tbrand=%s\n", s.foclen, s.fstop, s.brand);
}
