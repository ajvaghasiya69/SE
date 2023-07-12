#include <stdio.h>

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};
void inputEmployees(struct Employee employees[], int count) {
	int i=0;
    for (i; i < count; i++) {
        printf("Enter employee number: ");
        scanf("%d", &(employees[i].empno));
        printf("Enter employee name: ");
        scanf(" %[^\n]", employees[i].empname);
        printf("Enter employee address: ");
        scanf(" %[^\n]", employees[i].address);
        printf("Enter employee age: ");
        scanf("%d", &(employees[i].age));
        printf("\n");
    }
}
void displayEmployees(const struct Employee employees[], int count) {
	int i=0;
 for (i; i < count; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Employee Number: %d\n", employees[i].empno);
        printf("Employee Name: %s\n", employees[i].empname);
        printf("Employee Address: %s\n", employees[i].address);
        printf("Employee Age: %d\n", employees[i].age);
        printf("\n");
    }
}
int main() {
    const int COUNT = 5;
    struct Employee employees[COUNT];
	inputEmployees(employees, COUNT);
    printf("Employee Information:\n");
    displayEmployees(employees, COUNT);
}
