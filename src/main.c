#include <stdio.h>
#include <stdlib.h>

struct s_name {
    char first[20];
    char last[20];
};

struct student {
    struct s_name name;
    float grade[3];
    float average;
};

void set_info(int size, struct student arr[]);
void show_info(int size, struct student arr[]);
int main(void) {
    const int len = 1;
    struct student students[len];
    set_info(len, students);
    show_info(len, students);
    return 0;
}

void show_info(int size, struct student arr[]) {
    for(int i = 0; i < size; i++) {
        printf("%-20s %-20s [%-4.1f, %-4.1f, %-4.1f] %4.1f\n",
                arr[i].name.first, arr[i].name.last,
                arr[i].grade[0], arr[i].grade[1], arr[i].grade[2],
                arr[i].average);
    }
}

void set_info(int size, struct student arr[]) {
    for(int i = 0; i < size; i++) {
        struct student *stu = &arr[i];
        printf("%d/%d: input first name: ", i+1, size);
        scanf("%20s", stu->name.first);
        printf("%d/%d input last name: ", i+1, size);
        scanf("%20s", stu->name.last);
        printf("%d/%d input 3 grades: ", i+1, size);
        scanf("%f %f %f", &(stu->grade[0]), &(stu->grade[1]), &(stu->grade[2]));
        stu->average = (stu->grade[0] + stu->grade[1] + stu->grade[2]) / 3;
    }
}
