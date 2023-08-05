#include <stdio.h>

struct Employee {
    int empNo;
    char empName[50];
    char address[100];
    int age;
};

void inputEmployee(struct Employee *emp) {
    printf("Enter employee number:- ");
    scanf("%d", &emp->empNo);
    getchar(); 

    printf("Enter employee name:- ");
    fgets(emp->empName, sizeof(emp->empName), stdin);
    emp->empName[strcspn(emp->empName, "\n")] = '\0'; 

    printf("Enter employee address:- ");
    fgets(emp->address, sizeof(emp->address), stdin);
    emp->address[strcspn(emp->address, "\n")] = '\0'; 
    printf("Enter employee age:- ");
    scanf("%d", &emp->age);
}

void displayEmployee(const struct Employee *emp) {
    printf("\nEmployee Number: %d\n", emp->empNo);
    printf("Employee Name: %s\n", emp->empName);
    printf("Employee Address: %s\n", emp->address);
    printf("Employee Age: %d\n", emp->age);
}

int main() {
    struct Employee emp;

    printf("Enter information for the employee:\n");
    inputEmployee(&emp);

    printf("\nEmployee Information:\n");
    displayEmployee(&emp);

    return 0;
}
