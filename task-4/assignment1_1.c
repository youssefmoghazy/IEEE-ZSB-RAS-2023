#include <stdio.h>
#include <string.h>

struct student_info {
    unsigned int roll_number: 4;
    unsigned int age: 8;
    unsigned int marks: 3;
    char name[20];
    char address[50];
};

void print_student_info(struct student_info student) {
    printf("Roll Number: %u\n", student.roll_number);
    printf("Age: %u\n", student.age);
    printf("Marks: %u\n", student.marks);
    printf("Name: %s\n", student.name);
    printf("Address: %s\n", student.address);
    printf("\n");
}

int main() {
    int n=3 // n is a variable (15)
    // Example student data
    struct student_info students[n] = {
        {1, 18, 2, "Youssef Moghazy", "123 Main St."},
        {2, 19, 1, "Nada Ali", "456 sre St."},
        {3, 20, 3, "Ahmed Mohamed", "789 Oek St."},

    };

    // Print info for each student
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i+1);
        print_student_info(students[i]);
    }

    return 0;
}
