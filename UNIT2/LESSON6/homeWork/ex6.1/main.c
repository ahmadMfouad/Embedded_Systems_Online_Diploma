#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Sstudent {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Sstudent student;
    printf("Enter information of student:\n");
    printf("Enter name: ");
    fflush(stdout);
    gets(student.name);
    printf("Enter roll number: ");
    fflush(stdout);
    scanf("%d", &student.roll);
    printf("Enter marks: ");
    fflush(stdout);
    scanf("%f", &student.marks);
    printf("Displaying Information:\n");
    printf("name: %s\nroll: %d\nmarks: %f", student.name, student.roll, student.marks);
    return 0;
}