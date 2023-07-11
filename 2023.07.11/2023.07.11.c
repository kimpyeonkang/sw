#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct Grade {
    int midterm;
    int finalterm;
    int assignment;
    int total;
};

int RandomNumber(int max) {
    return rand() % (max + 1);
}

int main() {
    srand((unsigned)time(NULL));

    int numStudents = 20;
    struct Grade students[20];

    for (int i = 0; i < numStudents; i++) {
        students[i].midterm = RandomNumber(40);
        students[i].finalterm = RandomNumber(30);
        students[i].assignment = RandomNumber(30);
        students[i].total = students[i].midterm + students[i].finalterm + students[i].assignment;
    }

    printf("학생\t중간\t기말\t과제\t총점\n");
    for (int i = 0; i < numStudents; i++) {
        printf("%d\t%d\t%d\t%d\t%d\n", i + 1, students[i].midterm, students[i].finalterm, students[i].assignment, students[i].total);
    }

    return 0;
}