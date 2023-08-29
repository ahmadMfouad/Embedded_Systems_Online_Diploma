#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Sstudent {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Sstudent students[10];
    printf("Enter information of students:\n");
    for (int i = 0; i < 10; i++) {
        printf("\nFor roll number %d\n", i + 1);
        students[i].roll = i + 1;
        printf("Enter name: ");
        fflush(stdout);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Enter marks: ");
        fflush(stdout);
        scanf("%f", &students[i].marks);
        fflush(stdin);
    }
    printf("\nDisplaying Information:\n");
    for (int i = 0; i < 10; i++) {
        printf("\nInformation for roll number %d: ", students[i].roll);
        printf("\nName: %s\nMarks: %.2f\n", students[i].name, students[i].marks);
    }
    return 0;
}