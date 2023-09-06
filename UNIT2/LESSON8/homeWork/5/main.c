#include <stdio.h>
#include <string.h>

struct SEmployee {
    char name[50];
    int id;
};

int main() {
    struct SEmployee emp;
    struct SEmployee* ptrEmp = &emp;
    strcpy(emp.name, "Alex");
    emp.id = 1002;
    printf("Employee Name: %s\n", ptrEmp->name);
    printf("Employee ID: %d\n", ptrEmp->id);
    return 0;
}