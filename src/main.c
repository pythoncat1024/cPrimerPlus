#include <stdio.h>
#include <string.h>

struct sname {
    char name[40];
    char middle[40];
    char lastname[40];
};
typedef struct sname sn;

struct smember {
    char id[40];
    sn name;
};
typedef struct smember sm;
void show(sm * arr, int size);

int main(void) {
    sm arr[5] = {
        {"1217459090", {"tom", "o", "lee"}},
        {"1327955373", {"stone", "s", "ding"}},
        {"1885645321", {"rose", "", "doctor"}},
        {"1523421332", {"ann", "n", "victor"}},
        {"1897643401", {"tony", "", "pig"}}
    };
    show(arr, 5);
    return 0;
}

void show(sm * arr, int size) {
    for(int i = 0; i < size; i++) {
        sm item = arr[i];
        if(strlen(item.name.middle)) {
            printf("%s, %s %c. -- %s\n", item.name.lastname, item.name.name, *item.name.middle, item.id);
        } else {
            printf("%s, %s -- %s\n", item.name.lastname, item.name.name, item.id);
        }
    }
}
