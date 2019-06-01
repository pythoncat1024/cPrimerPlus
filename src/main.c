#include <stdio.h>
#include <string.h>

struct fullname {
    char fname[20];
    char lname[20];
};
struct bard {
    struct fullname name;
    int born;
    int died;
};

int main(void) {
    struct bard willie;
    struct bard * pt = &willie;
    printf("set born:");
    scanf("%d", &willie.born);
    printf("set born again:");
    scanf("%d", &(pt->born));
    printf("set lastname:");
    scanf("%s", willie.name.lname);
    printf("set lastname:");
    scanf("%s", pt->name.lname);
    char three = pt->name.lname[2];
    size_t len = strlen(pt->name.fname) + strlen(pt->name.lname);
    printf("three = %c, len = %zd\n", three, len);
    return 0;
}
