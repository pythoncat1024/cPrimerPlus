#include <stdio.h>

struct name {
    char first[20];
    char last[20];
};
struct bem {
    int limbs;
    struct name title;
    char type[30];
};

void show(struct bem bb);
void print(struct bem * pb);
int main(void) {

    struct bem * pb;
    struct bem deb = {
        6, {"Berbnazel", "Gwolkpwolk"}, "Arcturan"
    };
    pb = &deb;
    show(deb);
    print(pb);
    return 0;
}
void print(struct bem * bb) {
    printf("%s %s is a %d-limbed %s\n", bb->title.first, bb->title.last, bb->limbs, bb->type);
}
void show(struct bem bb) {
    printf("%s %s is a %d-limbed %s\n", bb.title.first, bb.title.last, bb.limbs, bb.type);
}
