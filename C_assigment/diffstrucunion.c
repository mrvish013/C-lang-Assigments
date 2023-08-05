#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

union Data {
    int intValue;
    float floatValue;
    char stringValue[20];
};

int main() {
    struct Student student1;
    student1.rollNumber = 101;
    strcpy(student1.name, "John");
    student1.marks = 85.5;

    union Data data;
    data.intValue = 42;

    printf("Structure - Student Information:\n");
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Name: %s\n", student1.name);
    printf("Marks: %.2f\n", student1.marks);

    printf("\nUnion - Data Values:\n");
    printf("Integer Value: %d\n", data.intValue);

    data.floatValue = 3.14;
    printf("Float Value: %.2f\n", data.floatValue);

    strcpy(data.stringValue, "Hello");
    printf("String Value: %s\n", data.stringValue);

    return 0;
}
