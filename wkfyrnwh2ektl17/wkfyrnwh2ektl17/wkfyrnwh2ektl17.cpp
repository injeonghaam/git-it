
#include <stdio.h>

typedef struct {
    char number[9];
    int kor;
    int eng;
    int math;
    int total;
    float avg;
} Student;

Student students[10] = {
    {"20230101", 87, 93, 76},
    {"20230102", 78, 85, 91},
    {"20230103", 90, 88, 84},
    {"20230104", 65, 72, 70},
    {"20230105", 99, 95, 98},
    {"20230106", 82, 79, 88},
    {"20230107", 74, 69, 80},
    {"20230108", 88, 91, 86},
    {"20230109", 93, 90, 85},
    {"20230110", 77, 81, 79}
};

int main() {
    for (int i = 0; i < 10; i++) {
        students[i].total = students[i].kor + students[i].eng + students[i].math;
        students[i].avg = students[i].total / 3.0f;
    }

    printf("학번\t\t국어\t영어\t수학\t총점\t평균\n");
    printf("******************************************************\n");

    for (int i = 0; i < 10; i++) {
        printf("%s\t%d\t%d\t%d\t%d\t%.2f\n",
            students[i].number,
            students[i].kor,
            students[i].eng,
            students[i].math,
            students[i].total,
            students[i].avg);
    }

    return 0;
}
