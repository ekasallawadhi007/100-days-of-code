#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to print a Student's details
void printStudent(struct Student s) {
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s;

    // Read student details
    printf("Enter student's name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Call function to print the student
    printStudent(s);

    return 0;
}
